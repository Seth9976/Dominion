// 函数: sub_4af0e0
// 地址: 0x4af0e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

arg1[3] = &UI2HitResult::`vftable'{for `InputHitResult'}
arg1[4] = 0
arg1[5] = 0
arg1[8] = 0
*arg1 = &HitResult::`vftable'{for `InputHitResult'}
arg1[1] = 0
int32_t var_94
int64_t* eax = sub_5ef820(&var_94, arg2)
void* edx = data_be2250
struct InputHitResult::UI2HitResult::VTable* var_3c
void* var_38
void* var_34
int32_t var_28
void* var_20
void* var_10
int32_t eax_1

if (edx != 0)
    sub_656520(eax, edx, &var_3c, arg2)
    eax_1 = var_28
    var_20 = var_34
    var_10 = var_38
else
    var_10 = edx
    eax_1 = 0
    var_20 = edx

int32_t var_8 = eax_1
int32_t esi_1 = 0xa
int32_t* edi = &data_8db72c
struct InputHitResult::UI2HitResult::VTable** i_8
struct InputHitResult::UI2HitResult::VTable** i_10
int32_t var_40_1
struct InputHitResult::UI2HitResult::VTable** i_4
struct InputHitResult::UI2HitResult::VTable** i_5
struct InputHitResult::UI2HitResult::VTable** i_6
struct InputHitResult::UI2HitResult::VTable** i_9

while (true)
    struct InputHitResult::UI2HitResult::VTable** i_7
    
    if (*edi == 0)
        i_7 = i_5
    else
        struct InputHitResult::UI2HitResult::VTable* var_74
        sub_656520(eax_1, edi[1], &var_74, arg2)
        int32_t var_60
        var_40_1 = var_60
        
        if ((var_60 != 0 || (esi_1 != 0xa && esi_1 != 9 && esi_1 != 8 && esi_1 != 3))
                && (*edi != 0x3e9 || var_60 != 0))
            eax_1 = var_8
            
            if (eax_1 != 0)
                i_7 = i_5
            
            if (eax_1 == 0 || i_7 u< i_10)
                i_9 = i_10
                void* var_70
                var_10 = var_70
                void* var_6c
                var_20 = var_6c
                i_6 = i_8
                break
        else
            eax_1 = var_8
            i_7 = i_5
    
    edi -= 0x28
    esi_1 -= 1
    
    if (edi s< &data_8db59c)
        i_9 = i_7
        i_6 = i_4
        var_40_1 = eax_1
        break

int32_t var_48 = 0
int64_t var_5c = 0
var_5c:4.d = 0xffffffff
int32_t* var_1c
sub_4ade00(&var_1c)
struct InputHitResult::UI2HitResult::VTable** i_1
struct InputHitResult::UI2HitResult::VTable** i = i_1

if (i != 0xffffffff)
    int32_t ebx_1 = 0
    
    do
        if (i[0x2ff].b != 0)
            int64_t* eax_5 = sub_4adae0(i, arg2, i, &var_34)
            i_8.q = *eax_5
            
            if (i_10 != 0xffffffff && (var_5c:4.d == 0xffffffff || eax_5[1].d u> ebx_1))
                ebx_1 = eax_5[1].d
                var_5c = *eax_5
        
        sub_4ade60(var_1c, &i_1)
        i = i_1
    while (i != 0xffffffff)
    
    var_48 = ebx_1

void* esi_4 = &data_1724008
struct InputHitResult::UI2HitResult::VTable** i_2
struct InputHitResult::UI2HitResult::VTable** i_3
void* const var_c_1
int32_t ecx_8
void* esi_5

while (true)
    int32_t edx_4 = *esi_4
    
    if (edx_4 != 0)
        i = sub_656520(i, edx_4, &var_3c, arg2)
        ecx_8 = var_28
        
        if (ecx_8 != 0)
            esi_5 = var_38
            var_c_1 = var_34
            i_2 = i_4
            i_3 = i_5
            break
    
    esi_4 += 4
    
    if (esi_4 s>= &data_1724030)
        esi_5 = nullptr
        i_3 = i_1
        ecx_8 = 0
        var_c_1 = nullptr
        i_2 = i_1
        break

int32_t eax_8 = var_94
struct InputHitResult::UI2HitResult::VTable** i_11 = 0xffffffff

if (eax_8 != 0)
    struct InputHitResult::UI2HitResult::VTable** i_12
    i_11 = i_12
    arg1[2] = eax_8
    arg1[1] = 1
    int32_t var_88
    arg1[4] = var_88
    int32_t var_84
    arg1[5] = var_84
    int32_t var_80
    arg1[6] = var_80
    int32_t var_7c
    arg1[7] = var_7c
    int32_t var_78
    arg1[8] = var_78

if (var_10 != 0 && i_9 s> i_11)
    arg1[1] = 2
    arg1[4] = var_10
    i_11 = i_9
    arg1[5] = var_20
    arg1[6] = i_6
    arg1[7] = i_9
    arg1[8] = var_40_1

if (esi_5 != 0 && i_9 s> i_11)
    i_11 = i_9
    arg1[1] = 2
    arg1[5] = var_c_1
    arg1[6] = i_2
    arg1[4] = esi_5
    arg1[7] = i_3
    arg1[8] = ecx_8

if (var_5c:4.d != 0xffffffff && var_48 s> i_11)
    *(arg1 + 0x24) = var_5c
    arg1[1] = 3
    arg1[0xb] = var_48

return arg1
