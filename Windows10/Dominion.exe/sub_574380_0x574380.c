// 函数: sub_574380
// 地址: 0x574380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t* i

if (arg2[2] != 0)
    int32_t esi_1 = 7
    i = &arg1[0x565]
    
    while (true)
        if (*i != 0xd30 && i[1] != 0xd30)
            esi_1 += 1
            i = &i[4]
            
            if (esi_1 s< 0x48)
                continue
        else if (esi_1 != 0)
            break
        
        sub_5742f0(i, 0xd30, arg1, arg2)
        break

if (arg2[3] != 0)
    int32_t ecx = 7
    i = &arg1[0x565]
    
    while (true)
        if (*i != 0xd3d && i[1] != 0xd3d)
            ecx += 1
            i = &i[4]
            
            if (ecx s< 0x48)
                continue
        else if (ecx != 0)
            break
        
        sub_5742f0(i, 0xd3d, arg1, arg2)
        break

if (*arg2 != 0)
    int32_t ecx_2 = 7
    i = &arg1[0x565]
    
    while (true)
        if (*i != 0x500 && i[1] != 0x500)
            ecx_2 += 1
            i = &i[4]
            
            if (ecx_2 s< 0x48)
                continue
        else if (ecx_2 != 0)
            break
        
        sub_574250(arg1, 0x500)
        break

if (arg2[1] != 0)
    int32_t ecx_4 = 7
    i = &arg1[0x565]
    
    while (true)
        if (*i != 0x923 && i[1] != 0x923)
            ecx_4 += 1
            i = &i[4]
            
            if (ecx_4 s< 0x48)
                continue
        else if (ecx_4 != 0)
            break
        
        sub_574250(arg1, 0x923)
        break

if (*(arg2 + 0x4c) == 0)
    return 

i = nullptr
void* ecx_6 = &arg1[0x4a0]

do
    int32_t edx = *ecx_6
    
    if (edx == 0)
        break
    
    if (edx == 0x14b6)
        *(arg2 + 0x4c) = 2
        break
    
    i += 1
    ecx_6 += 0x14
while (i s< 0x20)

int32_t i_3 = arg1[0x669]
int32_t edx_1 = 0

if (i_3 s> 0)
    i = &arg1[0x54b3]
    int32_t i_1
    
    do
        if (i[-1] == 0xe01 && *i == 0)
            edx_1 += 1
        
        i = &i[8]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

uint32_t ecx_7 = 2 - edx_1

if (ecx_7 s>= *(arg2 + 0x4c))
    ecx_7 = *(arg2 + 0x4c)

if (ecx_7 s<= 0)
    return 

uint32_t i_2 = 0

if (arg1[0x34e] s<= 0)
    return 

i = 0x3f1

do
    void* j_1 = arg1[0x669]
    int32_t ebx_1 = 6
    
    if (i_2 != 0xffffffff)
        ebx_1 = 0x3f1
    
    int32_t edx_2 = 0
    int32_t var_28
    uint32_t var_24
    
    if (j_1 s<= 0)
    label_57458b:
        var_24 = ecx_7
        var_28 = 0
        sub_571da0(i, i_2, arg1, 0xe01, 0x3f1, nullptr, var_24)
    else
        i = &arg1[0x54b3]
        void* j
        
        do
            if (i[1] == ebx_1 && *i == i_2 && i[-1] == 0xe01)
                edx_2 += i[4]
            
            i = &i[8]
            j = j_1
            j_1 -= 1
        while (j != 1)
        
        if (edx_2 == 0)
            goto label_57458b
        
        void* j_2 = j_1
        int32_t var_1c_1 = 0xffffffff
        sub_571fa0(i, i_2, arg1, 0xe01, ecx_7, 0x3f1, j_1, var_28, var_24, j_1.b)
    i_2 += 1
    i = 0x3f1
while (i_2 s< arg1[0x34e])
