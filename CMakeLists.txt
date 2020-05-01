cmake_minimum_required(VERSION 3.15)
project(TP_Patterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(TP_Patterns main.cpp Units/Unit.cpp Units/Unit.h Units/Soldier.cpp Units/Soldier.h Units/Sniper.cpp Units/Sniper.h Units/MachineGunner.cpp Units/MachineGunner.h Units/RussianSoldier.cpp Units/RussianSoldier.h Units/GermanSoldier.cpp Units/GermanSoldier.h Units/RussianMachineGunner.cpp Units/RussianMachineGunner.h Units/GermanMachineGunner.cpp Units/GermanMachineGunner.h Units/RussianSniper.cpp Units/RussianSniper.h Units/GermanSniper.cpp Units/GermanSniper.h UnitsFactory/UnitsFactory.cpp UnitsFactory/UnitsFactory.h UnitsFactory/RussianUnitsFactory.cpp UnitsFactory/RussianUnitsFactory.h UnitsFactory/GermanUnitsFactory.cpp UnitsFactory/GermanUnitsFactory.h UnitGroups/Squad.cpp UnitGroups/Squad.h UnitGroups/UnitsGroup.cpp UnitGroups/UnitsGroup.h UnitGroups/UnitLeaf.cpp UnitGroups/UnitLeaf.h UnitGroups/CompositeGroup.cpp UnitGroups/CompositeGroup.h UnitGroups/Army.cpp UnitGroups/Army.h)