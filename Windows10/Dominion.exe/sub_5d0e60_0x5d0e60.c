// 函数: sub_5d0e60
// 地址: 0x5d0e60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* eax
int32_t ecx
eax, ecx = sub_4d46e0(2, 0)

if (data_b604b8 != 0)
    ecx.b = 1
    char* eax_2 = data_b604bc + 0xc
    char temp0_1 = *eax_2
    *eax_2 = 1
    ecx.b = temp0_1
    sub_6a9320(&data_b604b8)
    int32_t ecx_1
    ecx_1.b = 0
    eax = data_b604bc + 0xc
    char temp0_2 = *eax
    *eax = 0
    ecx_1.b = temp0_2

bool cond:0 = data_bdfb58 == 0
data_b604c8 = 0

if (not(cond:0))
    eax = sub_6a9320(&data_bdfb58)

int32_t i = 0

if (data_be2208 s> 0)
    do
        int32_t* ecx_2 = *((i << 2) + &data_be1e08)
        
        if (ecx_2[1] != 0x15)
            sub_63b870(eax, &data_801800, "assetPtr->assetType == ASSET_TYPE_SOUND", 
                "C:\x\ax2017\Engine\Sound.cpp", 0x356, "SoundGetDef")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void* eax_4 = sub_5af880(ecx_2)
        int32_t j = 0
        
        if (*(eax_4 + 0x30) s> 0)
            do
                void* ecx_3 = *(*(eax_4 + 0x20) + (j << 3))
                
                if (ecx_3 != 0 && *(ecx_3 + 0x1c) == 0)
                    sub_688a50(ecx_3)
                    sub_69ec60(*(*(eax_4 + 0x20) + (j << 3)))
                
                j += 1
            while (j s< *(eax_4 + 0x30))
        
        sub_688a50(*((i << 2) + &data_be1e08))
        eax = sub_69ec60(*((i << 2) + &data_be1e08))
        i += 1
    while (i s< data_be2208)

data_be2208 = 0
int32_t ecx_8 = sub_4d46e0(3, 0)

for (int32_t i_1 = 0; i_1 s< 6; i_1 += 1)
    ecx_8 = sub_5ca690(ecx_8, i_1)

void* i_2 = data_b809e0
void* ecx_10 = data_b809e4 * 0x1c30 + i_2

if (i_2 u>= ecx_10)
label_5d0f85:
    i_2 = 0xffffffff
else
    while ((*(i_2 + 0x1c28) & 0xffff0000) == 0)
        i_2 += 0x1c30
        
        if (i_2 u>= ecx_10)
            goto label_5d0f85

void* i_3 = i_2

for (; i_2 != 0xffffffff; i_2 = i_3)
    sub_5cb5a0(i_2)
    sub_6376d0(&data_b809e0, &i_3)

sub_637650(&data_b809e0)
int32_t result = memset(0xb604d0, 0, 0x204f8)
data_b809dc = 0
data_b80a24 = 0
data_b80a2c = 0
data_b8097c = 0
data_b7fcf4 = 0
data_b604e4 = 0xffffffff
data_b604cc = 0
data_1724a48 = 0xffffffff
data_1724a50 = 0xffffffff
data_1724a4c = 0
data_1597e30 = 0
data_1597e3c = 0
data_1597e48 = 0
data_1597e28 = 0
__builtin_memset(&data_1597e50, 0, 0x1c)
return result
