// 函数: sub_4c3370
// 地址: 0x4c3370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(sub_64e7a0(arg1) + 0x18bc) = sub_4c0d50
int32_t eax_1 = data_8db7f8

if (eax_1 u> 3)
    sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
        0x1527, "FriendsUpdate")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (eax_1)
    case 0
        uint32_t eax_2 = sub_64e7a0(arg1)
        sub_665db0(eax_2, &data_8dbe9c, eax_2, 0x3f800000, 0xffffffff, 0)
        void* eax_4 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4254
        int32_t var_14 = 0xffffffff
        sub_666380(eax_4, &data_8dbe18, arg1, eax_4)
        return sub_4c2f90(arg1, 0) __tailcall
    case 1
        uint32_t eax_6 = sub_64e7a0(arg1)
        sub_665db0(eax_6, &data_8dbea8, eax_6, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_7 = sub_64e7a0(arg1)
        sub_665db0(eax_7, &data_8dbec0, eax_7, 0x3f800000, 0xffffffff, 0)
        return sub_4c2f90(arg1, 1) __tailcall
    case 2
        uint32_t eax_9 = sub_64e7a0(arg1)
        sub_665db0(eax_9, &data_8dbea8, eax_9, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_10 = sub_64e7a0(arg1)
        sub_665db0(eax_10, &data_8dbecc, eax_10, 0x3f800000, 0xffffffff, 0)
        return sub_4c2f90(arg1, 2) __tailcall
    case 3
        uint32_t eax_12 = sub_64e7a0(arg1)
        sub_665db0(eax_12, &data_8dbeb4, eax_12, 0x3f800000, 0xffffffff, 0)
        return sub_4c2f90(arg1, 3) __tailcall
