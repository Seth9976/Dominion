// 函数: sub_584b10
// 地址: 0x584b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = arg4
uint32_t edx_1 = &arg3[arg2 * 0x168c]
uint32_t var_5c = edx_1
arg3[arg2 * 0x168c + *(edx_1 + 0x17550) + 0x6cfe] = eax
*(edx_1 + 0x17550) += 1
int32_t eax_1 = arg3[0x541]

if (eax_1 != 3 && eax_1 != 5 && eax_1 != 4 && eax_1 != 6 && arg3[0x540].b == 0)
    uint32_t eax_2 = arg2
    
    if (arg2 == arg3[0x673])
        eax_2 = arg3[0x674]
    
    eax_1 = sub_59f9b0(eax_2, arg2, arg3, eax_2, 0x21, 0, &arg4, 1, 0, 0, 0, 0)

uint32_t ecx_4 = zx.d(sub_5849c0(eax_1, arg2, arg3, arg4.w))
void* eax_4 = arg3[0x541]

if (eax_4 != 3 && eax_4 != 5 && eax_4 != 4 && eax_4 != 6)
    int32_t* var_8c_2 = ecx_4
    ecx_4.b = eax_4 == 2
    eax_4 = sub_61b1b0(eax_4, 8, ecx_4.b, arg2, arg4, var_8c_2, nullptr, nullptr, nullptr, 0, 0, 0, 
        0, 0)

if (arg5 == 0)
    sub_581700(eax_4, arg2, arg3, arg4)

uint32_t ebx = arg4

if (arg3[0x49f].b != 0)
    int32_t ecx_6 = 0
    int32_t i = *(arg3[ebx * 0x19 + 0x692] + 0x8c)
    int32_t* eax_8 = var_5c + 0x17518
    
    while (*eax_8 != i)
        ecx_6 += 1
        eax_8 = &eax_8[1]
        
        if (ecx_6 s>= 4)
            uint32_t ecx_7 = var_5c
            
            if (arg3[0x45d] == i)
                *(ecx_7 + 0x17570) += arg3[0x45e]
            
            if (arg3[0x45f] == i)
                *(ecx_7 + 0x17570) += arg3[0x460]
            
            if (arg3[0x461] == i)
                arg3[arg2 * 0x168c + 0x5d5c] += arg3[0x462]
            
            if (arg3[0x463] == i)
                arg3[arg2 * 0x168c + 0x5d5c] += arg3[0x464]
            
            break

int32_t ecx_10 = 0
var_5c = *(arg3[ebx * 0x19 + 0x692] + 0x8c)
void* eax_18 = arg2 * 0x5a30 + 0x17518 + arg3
int32_t var_70
char const* const var_6c_2
char* ecx_11

while (true)
    int32_t edx_5 = *eax_18
    
    if (edx_5 != var_5c)
        if (edx_5 == 0)
            arg3[arg2 * 0x168c + ecx_10 + 0x5d46] = var_5c
        else
            ecx_10 += 1
            eax_18 += 4
            
            if (ecx_10 s< 4)
                continue
            
            var_6c_2 = "MarkLandscapeBought"
            var_70 = 0x2e53
            ecx_11 = "Halt"
            break
    
    int32_t eax_21 = arg3[0x541]
    
    if (eax_21 != 4 && eax_21 != 3 && eax_21 != 5)
        uint32_t eax_22 = zx.d(ebx.w)
        var_5c = eax_22
        
        if (eax_22 u>= 0x320)
            sub_591930()
            ebx = arg4
            eax_22 = var_5c
        
        uint32_t ebx_1 = zx.d(ebx.w)
        var_5c = arg3[eax_22 * 0x19 + 0x694]
        
        if (ebx_1 u>= 0x320)
            sub_591930()
        
        void* ebx_2 = var_5c + (arg2 << 2)
        
        if (sub_5754f0(ebx_1 * 0x64, arg3[ebx_1 * 0x19 + 0x693], arg3, 0x8000000, 0) == 0)
            arg3[ebx_2 + 0x17be5] += 1
        else
            arg3[0x34e]
            arg3[ebx_2 + 0x17be5] = divs.dp.d(sx.q(arg3[0x678] - 1), arg3[0x34e]) + 1
        
        ebx = arg4
    
    uint32_t ebx_3 = zx.d(ebx.w)
    
    if (ebx_3 u>= 0x320)
        sub_591930()
    
    uint32_t var_54
    int32_t eax_46
    
    if (sub_5754f0(ebx_3 * 0x64, arg3[ebx_3 * 0x19 + 0x693], arg3, 0x400, 0) == 0)
        uint32_t ebx_5 = zx.d(arg4.w)
        
        if (ebx_5 u>= 0x320)
            sub_591930()
        
        eax_46 = sub_5754f0(ebx_5 * 0x64, arg3[ebx_5 * 0x19 + 0x693], arg3, 0x8000000, 0)
        
        if (eax_46.b != 0)
            uint32_t eax_49 = sub_571f30(eax_46, arg2, arg3, 0xe01, 0x3f1, 0)
            uint32_t ebx_6 = zx.d(arg4.w)
            var_54 = eax_49
            
            if (ebx_6 u>= 0x320)
                sub_591930()
                eax_49 = var_54
            
            eax_46 = sub_584790(eax_49, eax_49, arg3, arg3[ebx_6 * 0x19 + 0x694])
        
        return sub_5911e0(eax_46, arg2, arg3, 6, nullptr, 1, 0, 0, 0, 0xffffffff, 0, 0)
    
    int32_t eax_34 = arg3[0x541]
    
    if (eax_34 != 3 && eax_34 != 5 && eax_34 != 4 && eax_34 != 6 && arg3[0x540].b == 0)
        uint32_t eax_35 = arg2
        
        if (arg2 == arg3[0x673])
            eax_35 = arg3[0x674]
        
        sub_59f9b0(eax_35, arg2, arg3, eax_35, 0x1f, 0, nullptr, 0, 0, 0, 0, 0)
    
    uint32_t ebx_4 = arg4
    var_54 = arg3[ebx_4 * 0x19 + 0x692]
    uint32_t eax_38 = zx.d(ebx_4.w)
    var_5c = eax_38
    
    if (eax_38 u>= 0x320)
        sub_591930()
        eax_38 = var_5c
    
    var_5c = ebx_4
    int32_t var_58_1 = arg3[eax_38 * 0x19 + 0x695]
    sub_573050(&var_5c, arg2, arg3, &var_5c)
    (*(var_54 + 0xa0))()
    void var_50
    memset(&var_50, 0, 0x48)
    var_54 = 7
    sub_580700(arg3, &var_54, 1, &var_50, 0, &arg4, 1, nullptr)
    TEB* fsbase
    void* ecx_19 = *fsbase->ThreadLocalStoragePointer
    eax_18 = *(ecx_19 + 0xf010)
    
    if (eax_18 s<= 0)
        var_6c_2 = "DomPopContext"
        var_70 = 0x792
        ecx_11 = "cs.numContexts > 0"
        break
    
    *(ecx_19 + 0xf010) = eax_18 - 1
    eax_46 = arg3[0x541]
    
    if (eax_46 != 3 && eax_46 != 5 && eax_46 != 4 && eax_46 != 6 && arg3[0x540].b == 0)
        uint32_t eax_47 = arg2
        
        if (arg2 == arg3[0x673])
            eax_47 = arg3[0x674]
        
        eax_46 = sub_59f9b0(eax_47, arg2, arg3, eax_47, 0x20, 0, nullptr, 0, 0, 0, 0, 0)
    
    return sub_5911e0(eax_46, arg2, arg3, 6, nullptr, 1, 0, 0, 0, 0xffffffff, 0, 0)

sub_63b870(eax_18, &data_801800, ecx_11, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_70, 
    var_6c_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
