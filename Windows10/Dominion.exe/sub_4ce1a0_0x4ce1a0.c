// 函数: sub_4ce1a0
// 地址: 0x4ce1a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_cc8d5c

if (ecx == 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi = *ecx
int32_t edi = ecx[1]
bool c = esi u< data_cb4490
int32_t temp3 = data_cb4494
void* result = sbb.d(edi, temp3, c)
bool s = sbb.d(edi, temp3, c) s< 0
bool o = unimplemented  {sbb eax, dword [0xcb4494]}

if (not(s) && ((sbb.d(edi, temp3, c) != 0 && s == o) || esi - data_cb4490 u> 0x3a98))
    result = ecx[5]
    void* edx_2 = data_147abf4
    data_cb4490 = esi
    data_cb4494 = edi
    
    if (result != 0)
        uint32_t ecx_1 = zx.d(result.w)
        
        if (ecx_1 u< *(edx_2 + 4))
            void* ecx_3 = ecx_1 * 0x64 + *edx_2
            
            if (*(ecx_3 + 0x60) == result && ecx_3 != 0)
                int32_t var_1c_1 = 0xf42ca
                return sub_689e00(result, 0, ecx_3 + 0x50)

return result
