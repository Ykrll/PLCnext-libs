# TimeUtils.GET_UNIX_TIME_ULINT

`GET_UNIX_TIME_ULINT` is a Native Function for PLCnext Engineer that returns the current Unix timestamp in milliseconds.

The function provides a simple way to obtain the current system time for timestamping events, logging, timeout calculations, or measuring elapsed time.

---

## Compatibility

This library has been developed and tested with the following software versions.

| Component         | Version              |
| ----------------- | -------------------- |
| PLCnext CLI       | 2024.6               |
| PLCnext Toolchain | 2024.6               |
| PLCnext SDK       | AXCF2152 24.0.17.244 |

The library may work with newer versions, but compatibility has only been verified with the versions listed above.

---

## Description

`GET_UNIX_TIME_ULINT` returns the current Unix timestamp as an `ULINT` value in milliseconds.

Internally, the function uses the POSIX `CLOCK_REALTIME` clock, which represents the current system (wall-clock) time.


---

# Interface

## Inputs

### Foo

**Data type**

`BOOL`

**Description**

Unused input parameter.

The parameter is ignored by the function and does not affect the returned timestamp.

It is present only because of a current limitation when creating Shared Native Functions with PLCnext CLI. At least one input parameter is required for the function to be correctly generated and recognized by PLCnext Engineer.

---


## Outputs

### GET_UNIX_TIME_ULINT

**Data type**

`ULINT`

**Description**

Current Unix timestamp in milliseconds since **00:00:00 UTC, January 1, 1970 (Unix Epoch)**.

---

# Example

```iecst
CurrentTime := TimeUtils.GET_UNIX_TIME_ULINT(TRUE);
```

Example returned value:

```
1782731286514
```

---


# Notes

* The timestamp is based on the controller's system clock.
* The returned value is affected by changes to the system time (for example NTP synchronization or manual clock adjustment).
* For measuring short execution times where system clock changes must not affect the result, a monotonic clock should be used instead.

---

# License

MIT

