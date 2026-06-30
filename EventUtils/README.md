# EventUtils.EVENT_TRIGGER

`EVENT_TRIGGER` is a Native Function Block for PLCnext Engineer that triggers a User Event from IEC code.

The function block allows a cyclic IEC task (or any other task) to start an Event Task by raising a configured User Event. This provides a simple bridge between cyclic program logic and PLCnext's Event Task mechanism.

---

## Compatibility

This library has been developed and tested with the following software versions.

| Component | Version |
|----------|---------|
| PLCnext CLI | 2024.6 |
| PLCnext Toolchain | 2024.6 |
| PLCnext SDK | AXCF2152 24.0.17.244 |

The library may work with newer versions, but compatibility has only been verified with the versions listed above.

---

## Description

`EVENT_TRIGGER` raises a PLCnext User Event on the rising edge of the `Execute` input.

Each trigger performs the following sequence:

1. Detect rising edge on `Execute`
2. Find the User Event by name
3. Raise the event
4. Report execution status

The function block performs the operation only once for each rising edge. Keeping `Execute := TRUE` for multiple PLC cycles will **not** repeatedly trigger the event.

---

## Notes

- Function blocks must be instantiated before use.
- The event name must exactly match the configured User Event in the PLCnext **Tasks and Events** editor.
- The event is triggered only on the rising edge of `Execute`.
- If the specified event does not exist, the function block reports an error.
- The block itself does not execute any IEC program. It only raises the configured User Event.

---

# Interface

## Inputs

### Execute

**Data type**

`BOOL`

**Description**

A rising edge triggers the User Event.

---

### EventName

**Data type**

`STRING`

**Description**

Name of the configured PLCnext User Event.

Example:

```iecst
'Event1'
```

The name is case-sensitive and must exactly match the event configured in PLCnext Engineer.

---

## Outputs

### Done

**Data type**

`BOOL`

**Description**

TRUE for one PLC cycle after the event has been successfully triggered.

---

### Error

**Data type**

`BOOL`

**Description**

TRUE for one PLC cycle if an error occurred.

---

### Status

**Data type**

`WORD`

**Description**

Status or error code describing the result of the last trigger.

| Value | Description |
|------:|-------------|
| `16#0000` | Success |
| `16#0001` | Event name is empty |
| `16#0002` | User Event not found |

---

# Example

```iecst
ButtonTrig(CLK := StartButton);

FbEvent(
    Execute := ButtonTrig.Q,
    EventName := 'Event1'
);

IF FbEvent.Done THEN
    // Event successfully triggered
END_IF;

IF FbEvent.Error THEN
    // Handle error
END_IF;
```

---

# Typical Application

A common application is starting an Event Task from a cyclic task.

```
Cyclic Task
     │
     │ Execute := TRUE
     ▼
EVENT_TRIGGER
     │
     │ User Event
     ▼
PLCnext Event Task
     │
     ▼
User Program
```

This allows expensive or asynchronous operations to be executed only when required instead of every PLC cycle.

---

# Error Handling

Always monitor both `Error` and `Status`.

Typical reasons for failure are:

- empty event name
- misspelled event name
- event not configured in the project
- event removed from the Tasks and Events configuration

---

# License

MIT