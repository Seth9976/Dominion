// 函数: sub_5ac2e0
// 地址: 0x5ac2e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_6c
void* i = __security_cookie ^ &var_6c
void* i_1 = i
int32_t edx = data_b4a5d0
int32_t ebx = data_b4a5c8
var_6c = arg1
void* i_2 = data_b4a5c4
void* i_3 = data_b4a5c0
bool cond:0 = edx u< ebx
char const* const var_84
int32_t var_80
char const* const var_7c
char* ecx_5

if (edx != ebx)
label_5ac3df:
    
    if (cond:0)
        i = data_b4a5cc
        
        if (i u<= i_2)
            void* eax_1
            
            if (i != i_2)
                i_2 = i
                eax_1 = *(i_2 * 0x510c + i_3 + 0x5108)
            else
                eax_1 = i_2 + 1
                data_b4a5c4 = eax_1
            
            data_b4a5cc = eax_1
            int32_t* edi = i_3 + i_2 * 0x510c
            memset(edi, 0, 0x5024)
            memset(&edi[0x141f], 0, 0x8c)
            memset(&edi[0x1409], 0, 0x58)
            edi[0x1442] = data_b4a5d4 << 0x10 | i_2
            int32_t eax_9 = data_b4a5d4 + 1
            data_b4a5d4 = eax_9
            
            if (eax_9 == 0x10000)
                data_b4a5d4 = 1
            
            void* esi = var_6c
            data_b4a5d0 += 1
            *edi = 0
            void var_68
            int32_t* eax_12 = sub_51ddf0(memcpy(&edi[1], esi, 0x5020), esi, &var_68, *(esi + 8))
            uint32_t result = edi[0x1442]
            *(edi + 0x5024) = *eax_12
            *(edi + 0x5034) = *(eax_12 + 0x10)
            *(edi + 0x5044) = *(eax_12 + 0x20)
            *(edi + 0x5054) = *(eax_12 + 0x30)
            *(edi + 0x5064) = *(eax_12 + 0x40)
            *(edi + 0x5074) = *(eax_12 + 0x50)
            int32_t* eax_13 = sub_64bfd0(0xc)
            eax_13[3] += 1
            
            if (*eax_13 == 0)
                sub_64be70(eax_13)
            
            int32_t* ecx_8 = *eax_13
            *eax_13 = *ecx_8
            ecx_8[2] = 0
            *ecx_8 = result
            ecx_8[1] = 0
            ecx_8[2] = data_b4a5e0
            void* eax_16 = data_b4a5e0
            
            if (eax_16 == 0)
                data_b4a5dc = ecx_8
            else
                *(eax_16 + 4) = ecx_8
            
            data_b4a5e4 += 1
            data_b4a5e0 = ecx_8
            sub_5a3960()
            CookieCheckFunction(result)
            return result
        
        var_7c = "DataArray<struct CampaignMapTask>::DataArrayAlloc"
        var_80 = 0xf5
        ecx_5 = "mFreeListHead <= mMaxUsedCount"
    else
        var_7c = "DataArray<struct CampaignMapTask>::DataArrayAlloc"
        var_80 = 0xf4
        ecx_5 = "mUsedCount < mMaxSize"
    
    var_84 = "C:\x\ax2017\Engine\DataArray.h"
else
    i = i_3
    
    for (void* ecx_1 = i_2 * 0x510c + i; i u< ecx_1; i += 0x510c)
        if ((*(i + 0x5108) & 0xffff0000) != 0)
            if (i != 0xffffffff)
                do
                    if (*i == 2)
                        int32_t edx_1 = data_b4a5cc
                        data_b4a5cc = zx.d(*(i + 0x5108))
                        *(i + 0x5108) = edx_1
                        i_2 = data_b4a5c4
                        edx = data_b4a5d0 - 1
                        i_3 = data_b4a5c0
                        data_b4a5d0 = edx
                    
                    i += 0x510c
                    void* ecx_4 = i_2 * 0x510c + i_3
                    
                    if (i u>= ecx_4)
                        break
                    
                    while ((*(i + 0x5108) & 0xffff0000) == 0)
                        i += 0x510c
                        
                        if (i u>= ecx_4)
                            goto label_5ac3bc
                while (i != 0xffffffff)
                
            label_5ac3bc:
                ebx = data_b4a5c8
            
            break
    
    cond:0 = edx u< ebx
    
    if (edx != ebx)
        goto label_5ac3df
    
    var_7c = "DomMapCreateAsync"
    var_80 = 0x12d0
    var_84 = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
    ecx_5 = "gMapGlobals.maps.mUsedCount != gMapGlobals.maps.mMaxSize"

sub_63b870(i, &data_801800, ecx_5, var_84, var_80, var_7c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
