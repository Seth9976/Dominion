// 函数: sub_5858c0
// 地址: 0x5858c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t edi = arg4
int32_t ebx = arg2
int32_t var_cb0 = ebx
uint32_t var_c94 = edi
int32_t __saved_ebp
void* eax_2 = sub_573050(__security_cookie ^ &__saved_ebp, arg2, arg3, edi)
int32_t var_cfc = 1
int32_t var_cf4 = ebx
int32_t ecx = *(eax_2 + 0x28)
int32_t var_ce8 = *(eax_2 + 0x2c)
void* eax_4 = ebx * 0x5a30 + arg3
int32_t eax_5 = *(eax_4 + 0x17528)
uint32_t eax_7 = zx.d((*edi).w)

if (eax_7 u>= 0x320)
    sub_591930()

uint32_t eax_9
int32_t edx_2
eax_9, edx_2 = sub_573890(eax_7 * 0x64, arg3[eax_7 * 0x19 + 0x693], arg3, 0, 0xffffffff, 0xffffffff)
int128_t xmm0 = var_cfc.o
uint32_t var_ce4 = eax_9
int128_t var_d74 = xmm0
int32_t var_ce0 = edx_2
int128_t var_d64 = ecx.o
int128_t var_d54 = eax_5.o
int128_t var_ccc
int128_t var_d44 = var_ccc
int64_t var_cbc
int64_t var_d34 = var_cbc

if ((arg7 & 0x20) != 0)
    sub_5911e0(eax_2, ebx, arg3, 0x1a, *edi, 6, *(eax_2 + 0x28), *(eax_2 + 0x2c), 0, 0xffffffff, 0, 
        0)

int32_t* ecx_3 = arg5
int32_t edx_4 = *ecx_3
TEB* fsbase

if (edx_4 != 0)
    void* eax_13 = *fsbase->ThreadLocalStoragePointer + 0x10
    void* var_c98_1 = eax_13
    
    if (*(eax_13 + 0xf000) s<= 0)
        sub_591930()
        eax_13 = var_c98_1
        ecx_3 = arg5
    
    int32_t edx_7 = *(eax_13 + 0xf000) * 0xf
    int32_t ecx_4 = ecx_3[1]
    *(var_c98_1 + (edx_7 << 3) - 0x5c) = *ecx_3
    ebx = var_cb0
    *(var_c98_1 + (edx_7 << 3) - 0x58) = ecx_4
    edx_4 = *arg5

int32_t eax_18
eax_18.b = (arg7 & 4) != 0
uint32_t eax_19 = eax_18 + 0x11

if ((arg7 & 2) != 0)
    eax_19 = 0x13

uint32_t eax_20 = zx.d(edx_4.w)
uint32_t var_ca0 = eax_20

if (eax_20 u>= 0x320)
    sub_591930()
    eax_20 = var_ca0

sub_5716d0(eax_20 * 0x64, eax_19, arg3, ebx, 0, edi, 1, arg3[eax_20 * 0x19 + 0x693], 0, 0, 0)
void* eax_23 = *arg6

if (eax_23 != 0)
    uint32_t eax_24 = zx.d(eax_23.w)
    var_ca0 = eax_24
    
    if (eax_24 u>= 0x320)
        sub_591930()
        eax_24 = var_ca0
    
    eax_23 = eax_24 * 0x64
    
    if (*(eax_23 + arg3 + 0x1a50) == 0x3e9)
        uint32_t eax_26 = zx.d((*edi).w)
        var_ca0 = eax_26
        
        if (eax_26 u>= 0x320)
            sub_591930()
            eax_26 = var_ca0
        
        eax_23 = sub_578d00(arg6, ebx, arg3, *arg6, 7, *edi, arg3[eax_26 * 0x19 + 0x693])

if (sub_5757f0(eax_23, (*edi).w, arg3, 4, 0) != 0)
    *(eax_4 + 0x17528) += 1

int32_t edx_11 = *(eax_4 + 0x1752c)
char var_c99 = 0
var_ca0 = 9
*(eax_4 + 0x1752c) = edx_11 + 1
arg3[ebx * 0x168c + edx_11 + 0x639e] = *edi
int32_t eax_32 = sub_580700(arg3, &var_ca0, 1, &var_d74, 0, edi, 1, &var_c99)
int32_t var_ca8 = 0
char var_c8d = 0
int32_t var_c98_3

if ((arg7 & 0x10) == 0)
    var_c98_3 = 0
    
    if (eax_19 == 0x12)
        var_c8d = 1
    else if (eax_32.b == 1)
        var_c98_3 = 1
        var_c8d = 1
else
    var_c98_3 = 0
    var_c8d = 1

int32_t var_c8c[0x321]

if (sub_5757f0(eax_32, (*edi).w, arg3, 4, 0) != 0 && (arg7 & 1) == 0)
    uint32_t eax_34 = *edi
    int32_t edi_1 = 0
    void* eax_35 = &arg3[0x5d3]
    
    for (int32_t i = 0x22; i s< 0x26; )
        int32_t edx_14 = *eax_35
        
        if (edx_14 != 0)
            var_c8c[edi_1] = edx_14
            edi_1 += 1
        
        i += 1
        eax_35 += 0x10
    
    int32_t ebx_2 = 0
    bool cond:4_1 = edi_1 != 0
    
    if (edi_1 s> 0)
        do
            if (sub_5757f0(eax_35, (var_c8c[ebx_2]).w, arg3, 0x10000000, 0) == 0)
            label_585c98:
                void var_c90
                eax_35 = *(&var_c90 + (edi_1 << 2))
                edi_1 -= 1
                var_c8c[ebx_2] = eax_35
                ebx_2 -= 1
            else
                eax_35 = arg7.d u>> 8
                
                if ((eax_35.b & 1) != 0)
                    uint32_t eax_39 = zx.d((var_c8c[ebx_2]).w)
                    var_ca0 = eax_39
                    
                    if (eax_39 u>= 0x320)
                        sub_591930()
                        eax_39 = var_ca0
                    
                    eax_35 = eax_39 * 0x64
                    
                    if (*(eax_35 + arg3 + 0x1a4c) == 0xf3a)
                        goto label_585c98
            
            ebx_2 += 1
        while (ebx_2 s< edi_1)
        
        cond:4_1 = edi_1 != 0
    
    int32_t edi_2
    
    if (cond:4_1)
        ebx = var_cb0
        var_ca0 = eax_34
        char eax_43 = var_c8d ^ 1
        int64_t var_d28_1 = 0
        int64_t var_d18
        __builtin_memset(&var_d18, 0, 0x1c)
        int32_t var_d20_1 = 0
        var_ce4.o = 0xbe.o
        int128_t var_cd4_1 = var_c98_3.o
        int32_t var_ca4 = 2
        int64_t var_d0c
        var_ccc = var_d0c.o
        
        if (sub_5869d0(&var_c8c, &var_ca4, arg3, ebx, 1, &var_c8c, edi_1, 1, 0, 0x22, &var_ce4, 
                0x18, eax_43 * 2, 0) != 0)
            edi_2 = var_c8c[0]
            uint32_t eax_47 = zx.d(edi_2.w)
            var_ca0 = eax_47
            
            if (eax_47 u>= 0x320)
                sub_591930()
                eax_47 = var_ca0
            
            sub_594010(eax_47 * 0x64, ebx, arg3, arg3[eax_47 * 0x19 + 0x693], 1)
        else
            edi_2 = 0
    else
        ebx = var_cb0
        edi_2 = 0
    
    var_ca8 = edi_2
    edi = var_c94

int32_t eax_55 = var_ca8

if (eax_55 != 0)
    uint32_t eax_49 = zx.d(eax_55.w)
    var_c94 = eax_49
    
    if (eax_49 u>= 0x320)
        sub_591930()
        eax_49 = var_c94
    
    int32_t ecx_18
    
    if (arg3[eax_49 * 0x19 + 0x693] != 0xf3a)
        eax_55 = arg3[0x541]
        
        if (eax_55 != 3 && eax_55 != 5 && eax_55 != 4 && eax_55 != 6 && arg3[0x540].b == 0)
            ecx_18 = ebx
            
            if (ebx == arg3[0x673])
                ecx_18 = arg3[0x674]
            
            int32_t var_d88_5 = 0
            int32_t var_d8c_5 = 0
            int32_t var_d98_4 = 1
            int32_t var_da0_2 = 0
            eax_55 = sub_59f9b0(&var_ca8, ebx, arg3, ecx_18, 0x14, 0, &var_ca8, 1, 0, 
                zx.d(var_c8d), 0, 0)
    else
        uint32_t eax_52 = sub_590990(&var_c8c, 0xffffffff, arg3, 5, &var_c8c)
        
        if (eax_52 != 0)
            if (eax_52 != 1)
                sub_591930()
            
            eax_52 = zx.d((var_c8c[0]).w)
            var_c94 = eax_52
            
            if (eax_52 u>= 0x320)
                sub_591930()
                eax_52 = var_c94
        
        eax_55 = arg3[0x541]
        
        if (eax_55 != 3 && eax_55 != 5 && eax_55 != 4 && eax_55 != 6 && arg3[0x540].b == 0)
            ecx_18 = ebx
            
            if (ebx == arg3[0x673])
                ecx_18 = arg3[0x674]
            
            int32_t var_d88_4 = 0
            int32_t var_d8c_4 = 0
            int32_t var_d98_3 = 1
            int32_t var_da0_1 = 0
            eax_55 = sub_59f9b0(&var_ca8, ebx, arg3, ecx_18, 0x15, 0, &var_ca8, 1, 
                arg3[eax_52 * 0x19 + 0x693], zx.d(var_c8d), 0, 0)

if (arg3[0x676].b != 0)
    if (arg3[0x673] == ebx)
        eax_55 = sub_5757f0(eax_55, (*edi).w, arg3, 4, 0)
        
        if (eax_55.b != 0)
            eax_55 = sub_576b30(eax_55, ebx, arg3, 0xb, 0, 0, 0)
            
            if (eax_55 s<= 0)
                eax_55 = sub_5911e0(eax_55, ebx, arg3, 0xb, nullptr, 1, 0, 0, 0, 0xffffffff, 0, 0)
    
    if (arg3[0x676].b != 0)
        if (arg3[0x673] == ebx)
            uint32_t eax_59 = sub_5757f0(eax_55, (*edi).w, arg3, 2, 0)
            
            if (eax_59.b != 0)
                uint32_t eax_60 = sub_576b30(eax_59, ebx, arg3, 0xc, 0, 0, 0)
                
                if (eax_60 s<= 0)
                    sub_5911e0(eax_60, ebx, arg3, 0xc, nullptr, 1, 0, 0, 0, 0xffffffff, 0, 0)
        
        if (arg3[0x676].b != 0 && arg3[0x673] == ebx)
            uint32_t eax_62 = zx.d((*edi).w)
            var_c94 = eax_62
            
            if (eax_62 u>= 0x320)
                sub_591930()
                eax_62 = var_c94
            
            int32_t eax_65 = eax_62 * 0x64
            
            if (*(eax_65 + arg3 + 0x1a4c) == 0x106)
            label_586062:
                uint32_t eax_66 = sub_576b30(eax_65, ebx, arg3, 0x1c, 0, 0, 0)
                
                if (eax_66 s<= 0)
                    sub_5911e0(eax_66, ebx, arg3, 0x1c, nullptr, 1, 0, 0, 0, 0xffffffff, 0, 0)
            else
                uint32_t eax_64 = zx.d((*edi).w)
                var_c94 = eax_64
                
                if (eax_64 u>= 0x320)
                    sub_591930()
                    eax_64 = var_c94
                
                eax_65 = eax_64 * 0x64
                
                if (*(eax_65 + arg3 + 0x1a4c) == 0x105)
                    goto label_586062

int32_t eax_67 = var_ca8

if (eax_67 == 0)
    int32_t var_d88_7 = *edi
    sub_585660(arg3, ebx)
else
    uint32_t eax_68 = zx.d(eax_67.w)
    var_c94 = eax_68
    
    if (eax_68 u>= 0x320)
        sub_591930()
        eax_68 = var_c94
    
    sub_5853c0(eax_68 * 0x64, ebx, arg3, *edi, arg3[eax_68 * 0x19 + 0x693])
    memset(&var_cfc, 0, 0x48)
    var_c94 = 0x15
    sub_580700(arg3, &var_c94, 1, &var_cfc, 0, &var_ca8, 1, nullptr)

if (arg3[0x16] == 0 && arg3[0x541] != 3)
    sub_5ee870()

int32_t eax_70 = arg3[0x541]

if (eax_70 != 3 && eax_70 != 5 && eax_70 != 4 && eax_70 != 6 && arg3[0x540].b == 0)
    int32_t eax_71 = ebx
    
    if (ebx == arg3[0x673])
        eax_71 = arg3[0x674]
    
    sub_59f9b0(eax_71, ebx, arg3, eax_71, 0x17, 0, edi, 1, 0, 0, 0, 0)

sub_5816b0(eax_2, 6, arg3, *(eax_2 + 0x28), *(eax_2 + 0x2c))
void* ecx_33 = *fsbase->ThreadLocalStoragePointer
int32_t eax_74 = *(ecx_33 + 0xf010)

if (eax_74 s<= 0)
    sub_63b870(eax_74, &data_801800, "cs.numContexts > 0", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*(ecx_33 + 0xf010) = eax_74 - 1
void* eax_76 = sub_583350(arg3)
int32_t temp1 = arg7.d & 0x40
arg7.d = temp1

if (temp1 != 0)
    sub_5911e0(eax_76, ebx, arg3, 0x16, *edi, 6, 0, 0, 0, 0xffffffff, 0, 0)

var_c8d = 0
var_c94 = 0xa
int32_t result = sub_580700(arg3, &var_c94, 1, &var_d74, 0, edi, 1, &var_c8d)
ebx.b = var_c99
ebx.b |= var_c8d

if (arg7.d != 0)
    int32_t i_1 = 0
    
    if (arg3[0x34e] s> 0)
        do
            result = sub_581450(result, i_1, arg3, 6, 0, nullptr)
            i_1 += 1
        while (i_1 s< arg3[0x34e])

result.b = ebx.b
CookieCheckFunction(result)
return result
