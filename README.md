# PLCnext Libraries

A collection of native libraries for **PLCnext Engineer** developed using the **PLCnext CLI Shared Native** framework.

Each library provides reusable IEC objects that can be imported into PLCnext Engineer projects.

---

## Repository Structure

### EventUtils

Utilities related to PLCnext events.

| IEC Object     | Name              | Description                                                                              |
| -------------- | ----------------- | ---------------------------------------------------------------------------------------- |
| Function Block | **EVENT_TRIGGER** | Triggers a PLCnext User Event from IEC code, allowing cyclic tasks to start Event Tasks. |

---

### TimeUtils

Utilities for working with time.

| IEC Object     | Name                    | Description                                                            |
| -------------- | ----------------------- | ---------------------------------------------------------------------- |
| Function       | **GET_UNIX_TIME_ULINT** | Returns the current Unix timestamp in milliseconds as a `ULINT` value. |

---

## Compatibility

The libraries in this repository are developed and tested with:

| Component         | Version              |
| ----------------- | -------------------- |
| PLCnext CLI       | 2024.6               |
| PLCnext Toolchain | 2024.6               |
| PLCnext SDK       | AXCF2152 24.0.17.244 |

Compatibility with newer versions has not been verified.

---

## License

This repository is licensed under the MIT License. See the `LICENSE` file for details.
