// 函数: sub_4d0550
// 地址: 0x4d0550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = &data_8db5b0
int32_t i_3 = 0xb
int32_t i

do
    sub_64e810(&esi[-4])
    sub_64e810(esi)
    esi = &esi[0xa]
    i = i_3
    i_3 -= 1
while (i != 1)
void* eax = data_8db800

if (eax != 0 && eax != &data_801800)
    if (data_cf65bc != i_3 && *eax != 0)
        char* eax_1 = sub_63d4e0(&data_8db800)
        int32_t temp1_1 = *(eax_1 + 4)
        *(eax_1 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_1, *(eax_1 + 0xc) + 0x10)
    
    data_8db800 = &data_801800

void* eax_2 = data_8db750

if (eax_2 != 0 && eax_2 != &data_801800)
    if (data_cf65bc != 0 && *eax_2 != 0)
        char* eax_3 = sub_63d4e0(&data_8db750)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
    
    data_8db750 = &data_801800

void* eax_4 = data_8db754

if (eax_4 != 0 && eax_4 != &data_801800)
    if (data_cf65bc != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(&data_8db754)
        int32_t temp3_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
    
    data_8db754 = &data_801800

void* eax_6 = data_8db758

if (eax_6 != 0 && eax_6 != &data_801800)
    if (data_cf65bc != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&data_8db758)
        int32_t temp4_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
    
    data_8db758 = &data_801800

void* result = data_8db75c

if (result != 0 && result != &data_801800)
    if (data_cf65bc != 0 && *result != 0)
        result = sub_63d4e0(&data_8db75c)
        int32_t temp5_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp5_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
    
    data_8db75c = &data_801800

int32_t* i_1 = data_1597cc4

while (i_1 != 0)
    int32_t* i_2 = i_1
    i_1 = i_1[1]
    result = sub_64c080(i_2, 0xc)

data_1597ccc = 0
data_1597cc4 = 0
data_1597cc8 = 0
return result
