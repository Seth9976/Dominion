// 函数: sub_5a3f10
// 地址: 0x5a3f10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = __chkstk(0x50cc)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
BOOL result = data_8db664

if (result != 1 && result != 0x15 && result != 0x16)
    result = TryEnterCriticalSection(&data_b4a600)
    
    if (result != 0)
        uint32_t eax_2 = EnterCriticalSection(&data_b4a5e8)
        void* edx_1 = data_b4a618
        int32_t var_18
        char const* const var_14_3
        char* ecx_4
        
        if (*(edx_1 + 4) == 0 && ecx != 0)
            eax_2 = zx.d(ecx.w)
            
            if (eax_2 u>= data_b4a5c4)
            label_5a418e:
                var_14_3 = "DataArray<struct CampaignMapTask>::DataArrayGet"
                var_18 = 0x6d
                ecx_4 = "DataArrayTryToGet(id) != NULL"
                goto label_5a419a
            
            int32_t ecx_1 = eax_2 * 0x510c
            eax_2 = data_b4a5c0
            
            if (*(ecx_1 + eax_2 + 0x5108) != ecx)
                goto label_5a418e
            
            void* esi_1 = *(ecx_1 + eax_2 + 0x507c)
            
            if (esi_1 == 0)
            label_5a3fc2:
                *(ecx_1 + eax_2 + 0x507c) = 0
                *(ecx_1 + eax_2) = 0
                int32_t* eax_3 = sub_64bfd0(0xc)
                eax_3[3] += 1
                
                if (*eax_3 == 0)
                    sub_64be70(eax_3)
                
                int32_t* ecx_3 = *eax_3
                *eax_3 = *ecx_3
                ecx_3[2] = 0
                *ecx_3 = ecx
                ecx_3[1] = 0
                ecx_3[2] = data_b4a5e0
                eax_2 = data_b4a5e0
                
                if (eax_2 == 0)
                    data_b4a5dc = ecx_3
                else
                    *(eax_2 + 4) = ecx_3
                
                data_b4a5e4 += 1
                edx_1 = data_b4a618
                data_b4a5e0 = ecx_3
            else if (*(esi_1 + 8) != 3 && esi_1 != data_171efc4)
                goto label_5a3fc2
        
        if (*(edx_1 + 4) == 2)
            *(edx_1 + 4) = 0
            int32_t* esi_3 = data_b4a618
            int32_t edx_2 = *esi_3
            char const* const var_1c
            
            if (edx_2 == 0)
                var_14_3 = "DataArray<struct CampaignMapTask>::DataArrayGet"
                var_18 = 0x6c
                ecx_4 = "id != DATAID_NULL"
            label_5a419a:
                var_1c = "C:\x\ax2017\Engine\DataArray.h"
            label_5a41a4:
                sub_63b870(eax_2, &data_801800, ecx_4, var_1c, var_18, var_14_3)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            eax_2 = zx.d(edx_2.w)
            
            if (eax_2 u>= data_b4a5c4)
                goto label_5a418e
            
            int32_t* ebx_1 = eax_2 * 0x510c + data_b4a5c0
            
            if (ebx_1[0x1442] != edx_2)
                goto label_5a418e
            
            int32_t* ecx_5 = ebx_1[0x141f]
            
            if (ecx_5 != 0)
                edx_2 = sub_69ed20(ecx_5)
                esi_3 = data_b4a618
            
            int32_t var_50cc[0x25]
            void var_9c
            __builtin_memcpy(&var_9c, sub_5a3aa0(&var_50cc, edx_2, esi_3, &var_50cc), 0x8c)
            __builtin_memcpy(&ebx_1[0x141f], &var_9c, 0x8c)
            eax_2 = data_b4a618
            
            if (ebx_1[0x1409] != *(eax_2 + 0x5028))
                var_14_3 = "DomMapUpdate"
                var_18 = 0x251
                var_1c = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
                ecx_4 = "task.map.params.seed == gMapGlobals.threadData->currentMap.params.seed"
                goto label_5a41a4
            
            *ebx_1 = 2
            data_b4a61c = 0
        
        LeaveCriticalSection(&data_b4a5e8)
        LeaveCriticalSection(&data_b4a600)
        
        while (data_b4a5d0 u< 2)
            int32_t var_5034_1 = 0
            int32_t var_5038_1 = 1
            int32_t var_5030_1 = sub_63eb70()
            
            if (sub_51b500() == 0)
                break
            
            void var_502c
            sub_5ac2e0(&var_502c)
        
        result = sub_5a3960()

CookieCheckFunction(result)
return result
