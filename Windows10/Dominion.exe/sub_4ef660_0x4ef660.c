// 函数: sub_4ef660
// 地址: 0x4ef660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t ecx = *(arg1 + 0xd4c)
int32_t eax_1
eax_1.b = ecx.b
char var_40b = ecx.b
char edx_1 = (ecx s>> 8).b
eax_1.b += edx_1
char var_40c = edx_1
char var_40a = eax_1.b
char var_409 = edx_1 ^ ecx.b
int32_t edx_2 = *(arg1 + 0xd50)
char ecx_2 = (edx_2 s>> 8).b
eax_1.b = edx_2.b
eax_1.b += ecx_2
char var_408 = ecx_2
char var_406 = eax_1.b
char var_405 = ecx_2 ^ edx_2.b
char var_407 = edx_2.b
int32_t edx_3 = *(arg1 + 0xd54)
char ecx_4 = (edx_3 s>> 8).b
eax_1.b = edx_3.b
eax_1.b += ecx_4
char var_404 = ecx_4
char var_402 = eax_1.b
char var_401 = ecx_4 ^ edx_3.b
char var_403 = edx_3.b
int32_t edx_4 = *(arg1 + 0xd58)
char ecx_6 = (edx_4 s>> 8).b
eax_1.b = edx_4.b
eax_1.b += ecx_6
char var_400 = ecx_6
char var_3ff = edx_4.b
int32_t edx_5 = *(arg1 + 0xd5c)
char var_3fd = ecx_6 ^ edx_4.b
char ecx_8 = (edx_5 s>> 8).b
char var_3fe = eax_1.b
eax_1.b = edx_5.b
eax_1.b += ecx_8
char var_3fc = ecx_8
char var_3fb = edx_5.b
int32_t edx_6 = *(arg1 + 0xd60)
char var_3f9 = ecx_8 ^ edx_5.b
char ecx_10 = (edx_6 s>> 8).b
char var_3fa = eax_1.b
eax_1.b = edx_6.b
eax_1.b += ecx_10
char var_3f8 = ecx_10
char var_3f7 = edx_6.b
int32_t edx_7 = *(arg1 + 0xd64)
char var_3f5 = ecx_10 ^ edx_6.b
char ecx_12 = (edx_7 s>> 8).b
char var_3f6 = eax_1.b
eax_1.b = edx_7.b
eax_1.b += ecx_12
char var_3f4 = ecx_12
char var_3f3 = edx_7.b
int32_t edx_8 = *(arg1 + 0xd68)
char var_3f1 = ecx_12 ^ edx_7.b
char ecx_14 = (edx_8 s>> 8).b
char var_3f2 = eax_1.b
eax_1.b = edx_8.b
char var_3f0 = ecx_14
char var_3ef = edx_8.b
eax_1.b += ecx_14
int32_t i_2 = 4
char var_3ee = eax_1.b
int32_t edx_9 = *(arg1 + 0xd6c)
int32_t esi = 0x28
char var_3ed = ecx_14 ^ edx_8.b
eax_1.b = edx_9.b
char var_3eb = edx_9.b
char ecx_16 = (edx_9 s>> 8).b
eax_1.b += ecx_16
char var_3ec = ecx_16
char var_3ea = eax_1.b
int32_t edx_10 = *(arg1 + 0xd70)
eax_1.b = edx_10.b
char var_3e9 = ecx_16 ^ edx_9.b
char ecx_18 = (edx_10 s>> 8).b
eax_1.b += ecx_18
char var_3e8 = ecx_18
char var_3e6 = eax_1.b
char var_3e7 = edx_10.b
char var_3e5 = ecx_18 ^ edx_10.b
void* edi_1 = arg1 + 0xd78
void* j
int32_t i

do
    int32_t ecx_19 = *(edi_1 - 4)
    void* ebx_1 = edi_1
    void* j_4 = nullptr
    char edx_12 = (ecx_19 s>> 8).b
    j.b = ecx_19.b
    (&var_40c)[esi] = edx_12
    j.b += edx_12
    (&var_40b)[esi] = ecx_19.b
    (&var_40a)[esi] = j.b
    (&var_409)[esi] = edx_12 ^ ecx_19.b
    esi += 4
    
    do
        int32_t edx_13 = *ebx_1
        
        if (edx_13 == 0)
            break
        
        j.b = edx_13.b
        char ecx_21 = (edx_13 s>> 8).b
        ebx_1 += 4
        (&var_40c)[esi] = ecx_21
        j.b += ecx_21
        (&var_40b)[esi] = edx_13.b
        (&var_40a)[esi] = j.b
        j = j_4 + 1
        (&var_409)[esi] = ecx_21 ^ edx_13.b
        esi += 4
        j_4 = j
    while (j s< 0xe)
    
    edi_1 += 0x3c
    i = i_2
    i_2 -= 1
while (i != 1)
void* edi_2 = arg1
int64_t var_41c = 0
int64_t var_42c = 0
int32_t edx_14 = *(edi_2 + 0xe64)
char ecx_23 = (edx_14 s>> 8).b
j.b = edx_14.b
(&var_40c)[esi] = ecx_23
j.b += ecx_23
(&var_40b)[esi] = edx_14.b
int32_t edx_15 = *(edi_2 + 0xe74)
(&var_40a)[esi] = j.b
j.b = edx_15.b
(&var_409)[esi] = ecx_23 ^ edx_14.b
char ecx_25 = (edx_15 s>> 8).b
(&var_408)[esi] = ecx_25
j.b += ecx_25
(&var_407)[esi] = edx_15.b
edx_15.b ^= ecx_25
(&var_406)[esi] = j.b
(&var_405)[esi] = edx_15.b
int32_t edx_16 = *(edi_2 + 0xec0)
char ecx_27 = (edx_16 s>> 8).b
j.b = edx_16.b
(&var_404)[esi] = ecx_27
j.b += ecx_27
(&var_403)[esi] = edx_16.b
int32_t edx_17 = *(edi_2 + 0xe78)
(&var_402)[esi] = j.b
j.b = edx_17.b
(&var_401)[esi] = ecx_27 ^ edx_16.b
char ecx_29 = (edx_17 s>> 8).b
(&var_400)[esi] = ecx_29
j.b += ecx_29
(&var_3ff)[esi] = edx_17.b
(&var_3fe)[esi] = j.b
(&var_3fd)[esi] = ecx_29 ^ edx_17.b
sub_63a3b0(&var_42c, esi + 0x10, &var_40c, &var_42c, &var_41c)
int32_t ecx_31 = var_42c.d
uint32_t i_1 = var_42c:4.d

if (ecx_31 != data_19e1780 || i_1 != data_19e1784)
    bool cond:0_1 = *(edi_2 + 0x1520) s<= 1
    data_19e1780 = ecx_31
    data_19e1784 = i_1
    var_42c:4.d = 1
    
    if (not(cond:0_1))
        void* esi_1 = edi_2 + 0x64
        void* var_414_1 = esi_1
        
        do
            int32_t eax_4
            int32_t edx_19
            edx_19:eax_4 = muls.dp.d(0x68c8c4ad, *(esi_1 + 0x1a4c))
            int32_t edx_20 = edx_19 s>> 0xc
            int32_t j_1 = *(esi_1 + 0x1a4c)
            int32_t* ebx_2 = *(((j_1 - ((edx_20 u>> 0x1f) + edx_20) * 0x2717) << 2) + &data_1938e70)
            int32_t* var_410 = ebx_2
            
            if (ebx_2 == 0)
            label_4efa4a:
                int32_t j_3 = j_1
                sub_4f7f30("Couldn't lookup %d\n")
                ebx_2 = nullptr
                var_410 = nullptr
            else
                while (*ebx_2 != j_1)
                    ebx_2 = ebx_2[0x6e]
                    var_410 = ebx_2
                    
                    if (ebx_2 == 0)
                        goto label_4efa4a
            
            __builtin_memset(&ebx_2[4], 0, 0x14)
            int32_t eax_9 = *(edi_2 + 0xe64)
            int32_t edx_21 = *(esi_1 + 0x1a4c)
            var_41c:4.d = eax_9
            int32_t eax_10
            
            if (edx_21 != eax_9)
                eax_10 = sub_57da30(edi_2, edx_21)
            
            if (edx_21 == eax_9 || eax_10 == var_41c:4.d)
                ebx_2[4].b = 1
            
            int32_t eax_11 = *(edi_2 + 0xe74)
            int32_t edx_22 = *(esi_1 + 0x1a4c)
            var_41c:4.d = eax_11
            int32_t eax_12
            
            if (edx_22 != eax_11)
                eax_12 = sub_57da30(edi_2, edx_22)
            
            if (edx_22 == eax_11 || eax_12 == var_41c:4.d)
                *(ebx_2 + 0x12) = 1
            
            int32_t eax_13 = *(edi_2 + 0xec0)
            int32_t edx_23 = *(esi_1 + 0x1a4c)
            var_41c:4.d = eax_13
            int32_t eax_14
            
            if (edx_23 != eax_13)
                eax_14 = sub_57da30(edi_2, edx_23)
            
            if (edx_23 == eax_13 || eax_14 == var_41c:4.d)
                *(ebx_2 + 0x22) = 1
            
            int32_t eax_15 = *(edi_2 + 0xe78)
            int32_t edx_24 = *(esi_1 + 0x1a4c)
            var_41c:4.d = eax_15
            int32_t eax_16
            
            if (edx_24 != eax_15)
                eax_16 = sub_57da30(edi_2, edx_24)
            
            if (edx_24 == eax_15 || eax_16 == var_41c:4.d)
                *(ebx_2 + 0x23) = 1
            
            void* eax_17 = edi_2 + 0xd74
            var_41c:4.d = 0
            void* var_420_1 = eax_17
            
            while (*eax_17 != 0)
                int32_t j_2 = 0
                void* edi_3 = eax_17 + 4
                
                do
                    int32_t esi_2 = *edi_3
                    
                    if (esi_2 != 0)
                        int32_t edx_25 = *(var_414_1 + 0x1a4c)
                        bool cond:1_1
                        
                        if (edx_25 != esi_2)
                            cond:1_1 = sub_57da30(arg1, edx_25) != esi_2
                            eax_17 = var_420_1
                        
                        if (edx_25 == esi_2 || not(cond:1_1))
                            int32_t eax_20 = *eax_17
                            char* eax_19
                            
                            if (eax_20 s> 0x1147)
                                eax_20 -= 0x1148
                                
                                if (eax_20 u> 0xd)
                                label_4efca0:
                                    sub_63b870(eax_20, &data_801800, "Halt", 
                                        "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0xbca, 
                                        "GatherTraits")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                switch (eax_20)
                                    case 0
                                        eax_19 = 0x14
                                    case 1
                                        eax_19 = 0x15
                                    case 2
                                        eax_19 = 0x16
                                    case 3
                                        eax_19 = 0x17
                                    case 4
                                        eax_19 = 0x18
                                    case 5
                                        eax_19 = 0x19
                                    case 6
                                        eax_19 = 0x1a
                                    case 7
                                        eax_19 = 0x1b
                                    case 8
                                        eax_19 = 0x1c
                                    case 9
                                        eax_19 = 0x1d
                                    case 0xa
                                        eax_19 = 0x1e
                                    case 0xb
                                        eax_19 = 0x1f
                                    case 0xc
                                        eax_19 = 0x20
                                    case 0xd
                                        eax_19 = 0x21
                                
                                *(eax_19 + var_410) = 1
                                eax_17 = var_420_1
                            else if (eax_20 == 0x1147)
                                eax_19 = 0x13
                                *(eax_19 + var_410) = 1
                                eax_17 = var_420_1
                            else
                                if (eax_20 != 0xc3f)
                                    goto label_4efca0
                                
                                eax_19 = 0x11
                                *(eax_19 + var_410) = 1
                                eax_17 = var_420_1
                    
                    j_2 += 1
                    edi_3 += 4
                while (j_2 s< 0xe)
                
                eax_17 += 0x3c
                var_420_1 = eax_17
                var_41c:4.d += 1
                
                if (var_41c:4.d + 1 s>= 4)
                    break
            
            edi_2 = arg1
            i_1 = var_42c:4.d + 1
            esi_1 = var_414_1 + 0x64
            var_42c:4.d = i_1
            var_414_1 = esi_1
        while (i_1 s< *(edi_2 + 0x1520))

CookieCheckFunction(i_1)
return i_1
