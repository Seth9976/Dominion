// 函数: sub_4c51a0
// 地址: 0x4c51a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(sub_64e7a0(arg1) + 0x18bc) = sub_4c4610
void* eax_1 = data_cc8d5c

if (eax_1 != 0)
    if (*(eax_1 + 0x5068) == 2)
        uint32_t eax_2 = sub_64e7a0(arg1)
        sub_665db0(eax_2, &data_8dbf08, eax_2, 0x3f800000, 0xffffffff, 0)
        eax_1 = data_cc8d5c
    
    if (eax_1 != 0)
        uint32_t eax_7
        void** edx
        
        if (*(eax_1 + 0x5068) == 0)
            eax_7 = sub_64e7a0(arg1)
            edx = &data_8dbf2c
        else
            int32_t ebx
            ebx.b = sub_5f1a50(sub_4b9480())
            
            if (sub_4b9480()[7] - 0x64 u<= 0x19)
                uint32_t eax_6 = sub_64e7a0(arg1)
                sub_665db0(eax_6, &data_8dbf14, eax_6, 0x3f800000, 0xffffffff, 0)
                eax_7 = sub_64e7a0(arg1)
                edx = &data_8dbf20
            else if (ebx.b == 0)
                eax_7 = sub_64e7a0(arg1)
                edx = &data_8dbf2c
            else
                eax_7 = sub_64e7a0(arg1)
                edx = &data_8dbf20
        
        return sub_665db0(eax_7, edx, eax_7, 0x3f800000, 0xffffffff, 0)

sub_63b870(eax_1, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
