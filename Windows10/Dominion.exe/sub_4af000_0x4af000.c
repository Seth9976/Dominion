// 函数: sub_4af000
// 地址: 0x4af000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t* edx = data_cc8d5c
var_8:3.b = arg1.b
void* eax

if (edx != 0)
    if (edx[6] == 3)
        eax = edx[5]
        void* ecx = data_147abf4
        
        if (eax != 0)
            uint32_t esi_1 = zx.d(eax.w)
            
            if (esi_1 u< *(ecx + 4))
                void* esi_3 = esi_1 * 0x64 + *ecx
                
                if (*(esi_3 + 0x60) == eax && esi_3 != 0)
                    int32_t var_10_1 = 0xf42b2
                    sub_689e00(eax, 1, esi_3 + 0x50)
                    eax = sub_689be0(&var_8:3, 1, esi_3 + 0x50, &var_8:3)
                    edx = data_cc8d5c
    
    if (edx != 0)
        int32_t result = edx[5]
        
        if (result != edx[0x1d66])
            int32_t ecx_3 = edx[1]
            edx[0x1d66] = result
            result = *edx
            edx[0x1d68] = result
            edx[0x1d69] = ecx_3
        
        edx[0x1d6a] = 0x40a00000
        return result

sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
    "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
