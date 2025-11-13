// 函数: sub_713890
// 地址: 0x713890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

free(*(arg1 + 0x64))
free(*(arg1 + 0x70))
int32_t i = 0
void* eax = arg1 + 8

if (*(arg1 + 4) s> 0)
    do
        void* esi_1 = *(*eax + (i << 2))
        free(*(esi_1 + 0x10))
        free(esi_1)
        i += 1
        eax = arg1 + 8
    while (i s< *(arg1 + 4))
    
    eax = arg1 + 8

free(*eax)
int32_t i_1 = 0

if (*(arg1 + 0x10) s> 0)
    do
        void* esi_2 = *(*(arg1 + 0x14) + (i_1 << 2))
        free(*(esi_2 + 0x28))
        free(*(esi_2 + 0x18))
        free(esi_2)
        i_1 += 1
    while (i_1 s< *(arg1 + 0x10))

free(*(arg1 + 0x14))
int32_t i_2 = 0

if (*(arg1 + 0x1c) s> 0)
    do
        void* esi_3 = *(*(arg1 + 0x20) + (i_2 << 2))
        free(*(esi_3 + 8))
        free(esi_3)
        i_2 += 1
    while (i_2 s< *(arg1 + 0x1c))

free(*(arg1 + 0x20))
int32_t i_3 = 0

if (*(arg1 + 0x24) s> 0)
    do
        void* esi_4 = *(*(arg1 + 0x28) + (i_3 << 2))
        free(*(esi_4 + 8))
        free(esi_4)
        i_3 += 1
    while (i_3 s< *(arg1 + 0x24))

free(*(arg1 + 0x28))
int32_t i_4 = 0

if (*(arg1 + 0x2c) s> 0)
    do
        void* esi_5 = *(*(arg1 + 0x30) + (i_4 << 2))
        free(*(esi_5 + 8))
        free(*(esi_5 + 0x24))
        int32_t eax_6 = *(esi_5 + 0x2c)
        
        if (eax_6 != 0)
            free(eax_6)
        
        int32_t eax_7 = *(esi_5 + 0x34)
        
        if (eax_7 != 0)
            free(eax_7)
        
        int32_t eax_8 = *(esi_5 + 0x3c)
        
        if (eax_8 != 0)
            free(eax_8)
        
        int32_t eax_9 = *(esi_5 + 0x44)
        
        if (eax_9 != 0)
            free(eax_9)
        
        free(esi_5)
        i_4 += 1
    while (i_4 s< *(arg1 + 0x2c))

free(*(arg1 + 0x30))
free(*(arg1 + 0x18))
return free(arg1)
