#pragma once

// ===============================
// 3-Point Bed Leveling Script
// Absolute negative Z version with Z reset after pauses
// Assigned to MAIN_MENU_ITEM_4_GCODE
// Compatible with Dreamer, Inventor, Dremel, NX printers
// ===============================

// -------------------- Dreamer Machine --------------------
#if ENABLED(FF_EXTRUDER_SWAP) && ENABLED(FF_DREAMER_MACHINE)
  #define MAIN_MENU_ITEM_4_GCODE \
"G90\n"\
"M211 S0\n"\
"M117 Bed leveling started\n"\
"G28\n"\
"G92 Z0\n"\
"G1 Z-5.7 F420\n"\
"M117 Moving to first point\n"\
"G1 X-17 Y-60 F3300\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to next point\n"\
"G1 X-87 Y55 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to next point\n"\
"G1 X53 Y55 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to final point\n"\
"G1 X-17 Y0 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Press to finish\n"\
"G92 Z-5.7\n"\
"M117 Leveling done\n"\
"G1 Z-10 F420\n"\
"M211 S1\n"\
"G28 X Y\n"\
"M84"
#endif

// -------------------- Inventor Machine --------------------
#if ENABLED(FF_EXTRUDER_SWAP) && ENABLED(FF_INVENTOR_MACHINE)
  #define MAIN_MENU_ITEM_4_GCODE \
"G90\n"\
"M211 S0\n"\
"M117 Bed leveling started\n"\
"G28\n"\
"G92 Z0\n"\
"G1 Z-5.7 F420\n"\
"M117 Moving to first point\n"\
"G1 X-15 Y-55 F3300\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to next point\n"\
"G1 X-85 Y55 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to next point\n"\
"G1 X55 Y55 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to final point\n"\
"G1 X-15 Y0 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Press to finish\n"\
"G92 Z-5.7\n"\
"M117 Leveling done\n"\
"G1 Z-10 F420\n"\
"M211 S1\n"\
"G28 X Y\n"\
"M84"
#endif

// -------------------- Dremel Machine --------------------
#if ENABLED(FF_EXTRUDER_SWAP) && ENABLED(FF_DREMEL_3D20_MACHINE)
  #define MAIN_MENU_ITEM_4_GCODE \
"G90\n"\
"M211 S0\n"\
"M117 Bed leveling started\n"\
"G28\n"\
"G92 Z0\n"\
"G1 Z-5.7 F420\n"\
"M117 Moving to first point\n"\
"G1 X-10 Y-60 F3300\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to next point\n"\
"G1 X-80 Y50 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to next point\n"\
"G1 X50 Y50 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to final point\n"\
"G1 X-10 Y0 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Press to finish\n"\
"G92 Z-5.7\n"\
"M117 Leveling done\n"\
"G1 Z-10 F420\n"\
"M211 S1\n"\
"G28 X Y\n"\
"M84"
#endif

// -------------------- NX Machine --------------------
#if ENABLED(FF_EXTRUDER_SWAP) && ENABLED(FF_NX_MACHINE)
  #define MAIN_MENU_ITEM_4_GCODE \
"G90\n"\
"M211 S0\n"\
"M117 Bed leveling started\n"\
"G28\n"\
"G92 Z0\n"\
"G1 Z-5.7 F420\n"\
"M117 Moving to first point\n"\
"G1 X-20 Y-60 F3300\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to next point\n"\
"G1 X-90 Y55 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to next point\n"\
"G1 X55 Y55 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Adjust the screw and press to continue\n"\
"G92 Z-5.7\n"\
"M117 Moving to final point\n"\
"G1 X-20 Y0 F3300\n"\
"G1 Z-5.7 F420\n"\
"M300 S440 P400\n"\
"M0 Press to finish\n"\
"G92 Z-5.7\n"\
"M117 Leveling done\n"\
"G1 Z-10 F420\n"\
"M211 S1\n"\
"G28 X Y\n"\
"M84"
#endif
