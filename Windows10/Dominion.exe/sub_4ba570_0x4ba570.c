// 函数: sub_4ba570
// 地址: 0x4ba570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1
void* edx = data_cc8d5c
char const* const var_24
int32_t var_20
char const* const var_1c
int32_t eax
char* ecx

if (edx != 0)
    void* i = *(edx + 0x7754)
    void* i_1 = i
    int32_t edi_1 = *(edx + 0x7758)
    
    for (void* ecx_2 = i + edi_1 * 0xc; i u< ecx_2; i += 0xc)
        if ((*(i + 8) & 0xffff0000) != 0)
            while (i != 0xffffffff)
                if (*i == *arg1)
                    *(i + 4) = arg1[1]
                    return i
                
                i += 0xc
                
                if (i u>= ecx_2)
                    break
                
                while ((*(i + 8) & 0xffff0000) == 0)
                    i += 0xc
                    
                    if (i u>= ecx_2)
                        goto label_4ba604
            
            break
    
label_4ba604:
    eax = *(edx + 0x7764)
    
    if (eax u< *(edx + 0x775c))
        eax = *(edx + 0x7760)
        
        if (eax u<= edi_1)
            int32_t eax_1
            
            if (eax != edi_1)
                edi_1 = eax
                eax_1 = *(i_1 + eax * 0xc + 8)
            else
                eax_1 = edi_1 + 1
                *(edx + 0x7758) = eax_1
            
            *(edx + 0x7760) = eax_1
            int32_t ecx_4 = edi_1 * 3
            int32_t eax_3 = *(edx + 0x7754)
            *(eax_3 + (ecx_4 << 2)) = 0
            int32_t* ecx_5 = eax_3 + (ecx_4 << 2)
            ecx_5[2] = *(edx + 0x7768) << 0x10 | edi_1
            *(edx + 0x7768) += 1
            
            if (*(edx + 0x7768) == 0x10000)
                *(edx + 0x7768) = 1
            
            *(edx + 0x7764) += 1
            *ecx_5 = *arg1
            int32_t eax_8 = arg1[1]
            ecx_5[1] = eax_8
            return eax_8
        
        var_1c = "DataArray<struct ServerNotification>::DataArrayAlloc"
        var_20 = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        var_1c = "DataArray<struct ServerNotification>::DataArrayAlloc"
        var_20 = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    var_24 = "C:\x\ax2017\Engine\DataArray.h"
else
    var_1c = "GetClient"
    var_20 = 0x7b
    var_24 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(eax, &data_801800, ecx, var_24, var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
