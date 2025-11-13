// 函数: sub_4b8f10
// 地址: 0x4b8f10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg1
void* ecx = data_cc8d5c

if (ecx != 0)
    int32_t edx
    int32_t var_c_1 = edx
    int32_t var_10 = *sub_4bb050(ecx + 0x507c, result)
    result = data_cc8d5c
    
    if (result != 0)
        if (*(result + 0x18) == 3)
            result = *(result + 0x14)
            void* ecx_2 = data_147abf4
            
            if (result != 0)
                uint32_t edx_1 = zx.d(result.w)
                
                if (edx_1 u< *(ecx_2 + 4))
                    void* esi_2 = edx_1 * 0x64 + *ecx_2
                    
                    if (*(esi_2 + 0x60) == result && esi_2 != 0)
                        int32_t var_1c_2 = 0xf42ad
                        sub_689e00(result, 8, esi_2 + 0x50)
                        return sub_689be0(&var_10, 8, esi_2 + 0x50, &var_10)
        
        return result

sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
