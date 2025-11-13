// 函数: sub_585010
// 地址: 0x585010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax

if (arg3[0x676].b == 0)
    eax = arg3
else if (arg3[0x673] == arg2)
    int32_t eax_1 = arg3[0x67b]
    
    if (eax_1 == 3 || eax_1 == 2)
        arg3[arg2 * 0x168c + 0x5d52] += 1
        eax = arg3
    else
        eax = arg3
else
    eax = arg3

void* ecx = &eax[0x673]
void* var_c = ecx
uint32_t arg_4

if (arg3[0x676].b != 0 && *ecx == arg2)
    arg3[arg2 * 0x168c + arg3[arg2 * 0x168c + 0x5d51] + 0x66be] = arg_4
    arg3[arg2 * 0x168c + 0x5d51] += 1
    ecx = var_c

int32_t eax_5 = arg3[0x541]

if (eax_5 != 3 && eax_5 != 5 && eax_5 != 4 && eax_5 != 6 && arg3[0x540].b == 0)
    uint32_t eax_4 = arg2
    
    if (arg2 == *ecx)
        eax_4 = arg3[0x674]
    
    eax_5 = sub_59f9b0(eax_4, arg2, arg3, eax_4, 0x21, 0, &arg_4, 1, 0, 0, 0, 0)

uint32_t ecx_5 = zx.d(sub_5849c0(eax_5, arg2, arg3, arg_4.w))
void* eax_7 = arg3[0x541]

if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6)
    int32_t* var_90_2 = ecx_5
    ecx_5.b = eax_7 == 2
    eax_7 = sub_61b1b0(eax_7, 8, ecx_5.b, arg2, arg_4, var_90_2, nullptr, nullptr, nullptr, 0, 0, 
        0, 0, 0)

sub_581700(eax_7, arg2, arg3, arg_4)
uint32_t edx_4 = arg_4
uint32_t edi = zx.d(edx_4.w)
uint32_t var_10 = edx_4

if (edi u>= 0x320)
    sub_591930()
    edx_4 = arg_4
    var_10 = edx_4

uint32_t edi_1 = zx.d(edx_4.w)
int32_t ecx_7 = arg3[edi * 0x19 + 0x693]
uint32_t eax_9 = arg3[0x352]
uint32_t var_14 = eax_9

if (edi_1 u>= 0x320)
    sub_591930()
    eax_9 = var_14

void* eax_10 = sub_571b30(arg3[edi_1 * 0x19 + 0x693], eax_9)
int32_t edx_6 = 0

for (int32_t i = *(eax_10 + 0xa8); i != 0; i = *(edx_6 * 0xb4 + eax_10 + 0xa8))
    if (i == 0x14)
        int32_t eax_12 = edx_6 * 0xb4
        uint32_t eax_15 = zx.d((*(eax_12 + eax_10 + 0x154) u>> 0xa).b) & 1
        sub_56f510(eax_15, var_10, arg3, eax_15.b, *(eax_12 + eax_10 + 0xbc))
        break
    
    edx_6 += 1

void var_5c
memset(&var_5c, 0, 0x48)
var_14 = 7
sub_580700(arg3, &var_14, 1, &var_5c, 0, &arg_4, 1, nullptr)
int32_t eax_16 = arg3[0x541]

if (eax_16 != 3 && eax_16 != 5 && eax_16 != 4 && eax_16 != 6 && arg3[0x540].b == 0)
    uint32_t eax_17 = arg2
    
    if (arg2 == *var_c)
        eax_17 = arg3[0x674]
    
    eax_16 = sub_59f9b0(eax_17, arg2, arg3, eax_17, 0x1f, 0, nullptr, 0, 0, 0, 0, 0)

if (arg4 == 0)
label_585329:
    int32_t var_70_4 = 4
    int32_t var_74_3 = 0x10
    int32_t var_78_3 = 0
    int32_t var_7c_2 = 0x476
    int32_t var_80_2 = 0
    int32_t var_84_3 = 0x476
    eax_16 = sub_583720(eax_16, arg2, arg3, arg_4, 0x476, nullptr, 0x476, 0, 0x10, 4)
else
    eax_16 = ecx_7
    
    if (eax_16 != 0)
        eax_16 = sub_5754f0(eax_16, eax_16, arg3, &__dos_header, 0)
        
        if (eax_16.b != 0)
            goto label_585329
        
        eax_16 = ecx_7
    
    arg4.d = 7
    void* edi_3 = &arg3[0x565]
    
    while (true)
        uint32_t ecx_15 = *edi_3
        var_14 = ecx_15
        
        if (ecx_15 == eax_16)
            break
        
        if (*(edi_3 + 4) == eax_16)
            break
        
        eax_16 = sub_57da30(arg3, eax_16)
        
        if (eax_16 == var_14)
            break
        
        edi_3 += 0x10
        int32_t eax_19 = arg4.d + 1
        arg4.d = eax_19
        eax_16 = ecx_7
        
        if (eax_19 s>= 0x21)
            goto label_585360
    
    if (edi_3 != 0)
        uint32_t edi_4 = *(edi_3 + 8)
        
        if (edi_4 != 0)
            uint32_t eax_20 = zx.d(edi_4.w)
            arg4.d = eax_20
            
            if (eax_20 u>= 0x320)
                sub_591930()
                eax_20 = arg4.d
            
            eax_16 = eax_20 * 0x64
            
            if (*(eax_16 + arg3 + 0x1a4c) == ecx_7)
                int32_t var_70_3 = 4
                int32_t var_74_2 = 0x10
                int32_t var_78_2 = 0
                int32_t var_7c_1 = 0x476
                int32_t var_80_1 = 0
                int32_t var_84_2 = 0x476
                eax_16 = sub_583720(eax_16, arg2, arg3, edi_4, 0x476, nullptr, 0x476, 0, 0x10, 4)

label_585360:
sub_5911e0(eax_16, arg2, arg3, 6, nullptr, 1, 0, 0, 0, 0xffffffff, 0, 0)
int32_t result = arg3[0x541]

if (result == 3 || result == 5 || result == 4 || result == 6 || arg3[0x540].b != 0)
    return result

uint32_t eax_21 = arg2

if (arg2 == *var_c)
    eax_21 = arg3[0x674]

return sub_59f9b0(eax_21, arg2, arg3, eax_21, 0x20, 0, nullptr, 0, 0, 0, 0, 0)
