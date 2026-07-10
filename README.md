# Keebox YR80 R2 Vial firmware — final mood+swirl build

Root overlay repo for GitHub Actions.

Final confirmed hardware settings:

- Keyboard name: Keebox YR80 R2 / Vial name: YR80 R2
- VID/PID: AA96:AA0D
- Bootloader: UF2 / YRKB_UPDATE_F1
- Matrix pins: Keebox YR80 R2 / PTG80B recovered pins
- RGB data pin: A10
- RGB LED count: 8
- Caps Lock LED: A15, active-high
- Dynamic layers: 2, to maximize Vial macro storage

RGBLight effects included:

- Static Light
- Static Gradient as default
- Rainbow Mood
- Rainbow Swirl

Other RGBLight effects are intentionally removed to save flash. Rainbow Mood is intentionally kept because removing it caused Vial/RGBLight mode mapping issues in testing.

Build artifact name:

```text
keebox_yr80_r2_vial.uf2
```
