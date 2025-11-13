// 函数: sub_6fe600
// 地址: 0x6fe600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 == 0)
    *(arg1 + 0x2d8) = arg2
    return 0

if (arg3 == 1)
    *(arg1 + 0x2d8) += arg2
    return 0

if (arg3 == 2)
    *(arg1 + 0x2d8) = *(sub_6fe4f0(arg1) + 0x14) + arg2
    return 0

sub_63b870(arg3, &data_801800, "Halt", "C:\x\ax2017\Engine\SoundOgg.cpp", 0x133, "SoundOggSeekFunc")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
