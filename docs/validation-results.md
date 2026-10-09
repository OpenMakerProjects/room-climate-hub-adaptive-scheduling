# Validation results

On 2026-10-10 IST, final implementation commit 35b2dd0f2012516a8ab1b28b15a70b57f6956796 passed Validate run 37983967717 and Completion run 37983967847. The latter explicitly ran C++17 scheduling policy tests, 3 PNG transport tests, complete artifact validation, ESPHome 2026.9.1 configuration validation and an actual ESP32 ESP-IDF compile.

The compile retained the 24-hour persistent schedule as std::array<float,24>. Image size 743899 bytes; RAM 45560 / 180736 bytes; flash 743899 / 1835008 bytes. Earlier configuration/array compile failures were corrected without weakening tests or schedule state.

Decoder run 37983247845 losslessly recovered the original PNG and committed it to the same branch: 1256263 bytes, 1536×1024, SHA256 1b0279bad67b753f894531d0084be51c7255386590185f38eba26f3937410eab. It failed on a later config gate; subsequent full final-head completion reran and passed with the decoded PNG. PNG CRC/hash/dimensions, SVG, relative links, MIT and credential gates passed; no transport chunks remain.

Physical board/sensors, Home Assistant integration, actual occupancy input and Matter pairing were not tested. Final documentation push/PR checks must pass before merge.
