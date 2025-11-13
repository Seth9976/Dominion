// 函数: sub_62a860
// 地址: 0x62a860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(sub_64e7a0(arg1) + 0x18bc) = sub_629d50
sub_62a3a0(sub_4bb9f0(0x1a98bf8, arg1, "tbl_logEntries"))
int32_t eax_2 = data_1724a54
uint32_t eax_5
void** edx

if (eax_2 == 0)
    eax_5 = sub_64e7a0(arg1)
    edx = &data_bf12dc
else
    if (eax_2 != 1)
        sub_63b870(eax_2 - 1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0xfba0, "LogLayoutUpdate")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_5 = sub_64e7a0(arg1)
    edx = &data_bf12e8

return sub_665db0(eax_5, edx, eax_5, 0x3f800000, 0xffffffff, 0)
