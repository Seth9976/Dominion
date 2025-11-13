// 函数: sub_5ebc50
// 地址: 0x5ebc50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int32_t ecx = 0
*(arg2 + 4) = 0
*(arg2 + 8) = 0
*(arg2 + 0x3a20) = 0
int32_t eax_3 = 0
void* var_1f4 = nullptr
int32_t var_40 = 0
int32_t var_20c[0x2]
int32_t var_58[0x2]

if (*(arg1 + 0x1068) != 0)
    eax_3 = 1
    var_20c[0] = 0x601
    ecx = 1
    var_1f4 = 1
    var_58[0] = 0x600
    var_40 = 1

var_20c[eax_3] = 0x103
var_58[ecx] = 0x106
int32_t i = 7
var_20c[var_1f4 + 1] = 0x102
var_20c[var_1f4 + 2] = 0x101
var_20c[var_1f4 + 3] = 0x100
void* var_1f4_4 = var_1f4 + 4
var_58[var_40 + 1] = 0x105
var_58[var_40 + 2] = 0x104
void* eax_14 = arg1 + 0x1594
int32_t esi_1 = var_40 + 3
void* var_224 = eax_14

do
    int32_t edx_1 = *eax_14
    
    if (edx_1 == 0)
        break
    
    if (edx_1 == 0x500)
        var_58[esi_1] = 0x500
        esi_1 += 1
        int32_t var_40_4 = esi_1
        break
    
    i += 1
    eax_14 += 0x10
while (i s<= 0x12)

void* eax_16 = sub_5eb3e0(&var_20c, 3, arg2, 2, &var_20c, var_1f4 + 4, &var_58, esi_1)

if (*(arg1 + 0x1069) != 0)
    sub_5eb3e0(eax_16, 2, arg2, 2, 0x86ed98, 3, 0, 0)

float var_214 = *(arg2 + 8) + 360f + 15f
void var_74
int32_t eax_17 = sub_5eb780(arg1, &var_74)
sub_5ebb90(eax_17, arg2, eax_17, 4, &var_74)
void* eax_18 = nullptr
void* ecx_6 = arg1 + 0x1744
int32_t i_1 = 0x22
int32_t xmm1_4 = ((*(arg2 + 8) - var_214) * 0.5f + var_214) ^ (data_8937c0.o).d
int128_t var_28

do
    int32_t edx_4 = *ecx_6
    
    if (edx_4 == 0)
        break
    
    *(&var_28:4 + (eax_18 << 2)) = edx_4
    i_1 += 1
    eax_18 += 1
    ecx_6 += 0x10
while (i_1 s<= 0x26)

if (eax_18 != 0)
    void* var_244_1
    int32_t* var_240_1
    int32_t var_23c_2
    
    if (eax_18 != 4)
        var_23c_2 = 0
        var_240_1 = nullptr
        var_244_1 = eax_18
    else
        var_23c_2 = 2
        int32_t var_1c
        var_240_1 = &var_1c
        var_244_1 = 2
    
    sub_5eb3e0(&var_28:4, 5, arg2, 4, &var_28:4, var_244_1, var_240_1, var_23c_2)

int32_t eax_20 = 0x27
void* i_2 = &data_b8226c
void* esi_4 = nullptr
int32_t var_21c = 0x27
var_214 = &data_b8226c

do
    if (eax_20 s>= 0x48)
        sub_591930()
        eax_20 = var_21c
    
    int32_t edx_5 = *i_2
    
    if (edx_5 != 0)
        for (void* const j = &data_86ee38; j != 0x86ee44; j += 4)
            if (*(arg1 + (*j << 2) + 0xe64) == edx_5)
                *(&var_28:4 + (esi_4 << 2)) = edx_5
                esi_4 += 1
        
        i_2 = var_214
        eax_20 = var_21c
    
    i_2 += 0x10
    eax_20 += 1
    var_21c = eax_20
    var_214 = i_2
while (i_2 s< 0xb8246c)

void* esi_5

if (esi_4 == 0)
    esi_5 = arg2
else
    esi_5 = arg2
    sub_5eb3e0(&var_28:4, 6, esi_5, 2, &var_28:4, esi_4, 0, 0)

void* edi_4 = arg1

if (*(edi_4 + 0x155c) == 0)
    goto label_5ebf96

float result = edi_4 + 0xe68
int32_t var_240_2
char const* const var_23c_3
char* ecx_9

if (*(edi_4 + 0xe68) != 0)
    sub_5eb3e0(result, 7, esi_5, 4, result, 3, 0, 0)
label_5ebf96:
    result = edi_4 + 0x1794
    int32_t ecx_11 = 0x27
    float result_2 = result
    
    while (true)
        if (*result == 0x1301)
            if (*(edi_4 + 0xec4) == 0)
                var_23c_3 = "KingdomHasBlackMarket"
                var_240_2 = 0x668d
                ecx_9 = "blackMarket[0] != CARD_NONE"
                break
            
            void* edi_5 = nullptr
            void* eax_23 = edi_4 + 0xecc
            
            while (*(eax_23 - 8) != 0)
                if (*(eax_23 - 4) == 0)
                    edi_5 += 1
                    break
                
                if (*eax_23 == 0)
                    edi_5 += 2
                    break
                
                if (*(eax_23 + 4) == 0)
                    edi_5 += 3
                    break
                
                if (*(eax_23 + 8) == 0)
                    edi_5 += 4
                    break
                
                if (*(eax_23 + 0xc) == 0)
                    edi_5 += 5
                    break
                
                edi_5 += 6
                eax_23 += 0x18
                
                if (edi_5 s>= 0x3c)
                    break
            
            uint32_t count = edi_5 << 2
            void var_1e0
            memcpy(&var_1e0, edi_4 + 0xec4, count)
            int32_t eax_25 = count s>> 2
            sub_4d4e30(eax_25, &var_1e0 + count, &var_1e0, eax_25, sub_58d5a0)
            esi_5 = arg2
            sub_5eb3e0(&var_1e0, 0x19, esi_5, 2, &var_1e0, edi_5, 0, 0)
            edi_4 = arg1
        else
            ecx_11 += 1
            result += 0x10
            
            if (ecx_11 s<= 0x47)
                continue
        
        void* var_22c
        void* var_228
        void var_204
        void var_50
        int128_t var_3c
        sub_5eb910(&var_228, &var_204, edi_4, &var_228, &var_50, &var_22c, &var_3c:0xc, &var_214)
        result = var_214
        
        if (result != 0)
            float result_1
            void* var_240_6
            int32_t var_23c_6
            
            if (result s<= 5)
                var_23c_6 = 0
                var_240_6 = nullptr
                result_1 = result
            else
                var_23c_6 = 3
                var_240_6 = &var_3c:0xc + ((result - 3) << 2)
                result_1 = result - 3
            
            result =
                sub_5eb3e0(&var_3c:0xc, 1, esi_5, 2, &var_3c:0xc, result_1, var_240_6, var_23c_6)
        
        float ecx_18 = 2.66246708e-44f
        int32_t i_3 = 0
        var_214 = 2.66246708e-44f
        void* edi_6 = &data_b8212c
        
        while (i_3 != 0xa)
            if (ecx_18 s>= 0x48)
                sub_591930()
                ecx_18 = var_214
            
            result = *edi_6
            
            if (result != 0)
                if (result s> 0xc10)
                    if (result == 0x1305)
                        result = 6.82432352e-42f
                        *(&var_3c + (i_3 << 2)) = result
                        i_3 += 1
                else if (result == 0xc10)
                    result = 4.32861096e-42f
                    *(&var_3c + (i_3 << 2)) = result
                    i_3 += 1
                else
                    result -= 0xc04
                    
                    switch (result)
                        case 0
                            result = 4.31179537e-42f
                            *(&var_3c + (i_3 << 2)) = result
                            i_3 += 1
                        case 2
                            result = 4.31459797e-42f
                            *(&var_3c + (i_3 << 2)) = result
                            i_3 += 1
                        case 4
                            result = 4.31740057e-42f
                            *(&var_3c + (i_3 << 2)) = result
                            i_3 += 1
                        case 7
                            result = 4.32160446e-42f
                            *(&var_3c + (i_3 << 2)) = result
                            i_3 += 1
            
            ecx_18 += 1
            edi_6 += 0x10
            var_214 = ecx_18
            
            if (edi_6 s>= 0xb8246c)
                break
        
        int32_t edx_8 = 0
        void* ecx_19 = arg1 + 0x1290
        
        while (i_3 != 0xa)
            result = *(ecx_19 - 0x10)
            
            if (result == 0)
                break
            
            if (result == 0xdc6)
                result = *ecx_19
                *(&var_3c + (i_3 << 2)) = result
                i_3 += 1
            
            edx_8 += 1
            ecx_19 += 0x14
            
            if (edx_8 s>= 0x20)
                break
        
        if (i_3 == 0)
        label_5ec20f:
            
            for (void* const i_4 = &data_86eda8; i_4 != &data_86ee38; i_4 += 0x18)
                int32_t j_1 = 0x13
                void* eax_34 = arg1 + 0x1654
                
                do
                    int32_t edx_10 = *eax_34
                    
                    if (edx_10 == 0)
                        break
                    
                    if (edx_10 == *i_4)
                        sub_5eb3e0(i_4 + 8, *(i_4 + 4), arg2, 2, i_4 + 8, 4, 0, 0)
                        break
                    
                    j_1 += 1
                    eax_34 += 0x10
                while (j_1 s<= 0x21)
            
            int32_t ecx_22 = 0x13
            void* eax_36 = arg1 + 0x1654
            int128_t var_2c
            void* esi_7
            
            while (true)
                int32_t edx_12 = *eax_36
                
                if (edx_12 != 0)
                    if (edx_12 == 0x91c)
                        esi_7 = arg2
                        __builtin_memcpy(&var_3c, 
                            "\x2f\x09\x00\x00\x30\x09\x00\x00\x31\x09\x00\x00\x32\x09\x00\x00\x33\x09\x"
                        "00\x00\x34\x09\x00\x00\x35\x09\x00\x00\x36\x09\x00\x00\x37\x09\x00\x00\x38"
                        "09\x00\x00", 
                            0x28)
                        sub_5eb3e0(&var_3c, 0xf, esi_7, 2, &var_3c, 5, &var_2c:4, 5)
                        break
                    
                    ecx_22 += 1
                    eax_36 += 0x10
                    
                    if (ecx_22 s<= 0x21)
                        continue
                
                esi_7 = arg2
                break
            
            int32_t i_5 = 0x13
            void* eax_37 = arg1 + 0x1654
            
            do
                int32_t edx_13 = *eax_37
                
                if (edx_13 == 0)
                    break
                
                if (edx_13 == 0xc0a)
                    for (int32_t j_2 = 0; j_2 s< 8; j_2 += 4)
                        *(&var_3c:8 + (j_2 << 2)) = _mm_unpacklo_epi32(
                            _mm_unpacklo_epi32(zx.o(j_2 + 0xc2a), zx.q(j_2 + 0xc2c)), 
                            _mm_unpacklo_epi32(zx.o(j_2 + 0xc2b), zx.q(j_2 + 0xc2d)))
                    
                    esi_7 = arg2
                    sub_5eb3e0(&var_3c:8, 0x10, esi_7, 2, &var_3c:8, 4, &var_28:4, 4)
                    break
                
                i_5 += 1
                eax_37 += 0x10
            while (i_5 s<= 0x21)
            
            void* edx_15 = var_224
            
            for (int32_t i_6 = 7; i_6 s<= 0x12; )
                int32_t ecx_26 = *edx_15
                
                if (ecx_26 == 0)
                    break
                
                if (ecx_26 == 0x923)
                    sub_5eb3e0(i_6, 0, esi_7, 2, 0x86ed48, 5, 0, 0)
                    break
                
                i_6 += 1
                edx_15 += 0x10
            
            int128_t var_f0
            int128_t* i_7 = &var_f0
            __builtin_memcpy(&var_f0, 
                "\x2c\x09\x00\x00\x2d\x09\x00\x00\x2e\x09\x00\x00\x33\x0b\x00\x00\x35\x0b\x00\x00\x37\x"
            "0b\x00\x00\x39\x0b\x00\x00\x32\x0b\x00\x00\x34\x0b\x00\x00\x36\x0b\x00\x00\x38\x0b\x00"
            "00\x2a\x0d\x00\x00\x28\x0d\x00\x00\x2b\x0d\x00\x00\x2f\x0d\x00\x00\x29\x0d\x00\x00\x46"
            "0f\x00\x00", 
                0x44)
            void* edi_9 = nullptr
            var_214 = &var_f0
            void var_1f0
            void var_ac
            
            do
                int32_t esi_9 = *i_7
                int32_t j_3 = 0x27
                float result_3 = result_2
                
                do
                    int32_t edx_16 = *result_3
                    
                    if (edx_16 == 0)
                        break
                    
                    if (edx_16 == esi_9)
                        *(&var_1f0 + (edi_9 << 2)) = esi_9
                        edi_9 += 1
                        break
                    
                    j_3 += 1
                    result_3 += 0x10
                while (j_3 s<= 0x47)
                
                i_7 = var_214 i+ 4
                var_214 = i_7
            while (i_7 != &var_ac)
            
            void* edx_17 = arg1 + 0x1654
            
            for (int32_t i_8 = 0x13; i_8 s<= 0x21; )
                int32_t ecx_28 = *edx_17
                
                if (ecx_28 == 0)
                    break
                
                if (ecx_28 == 0xd12)
                    __builtin_memcpy(&var_1f0 + (edi_9 << 2), 
                        "\x2c\x0d\x00\x00\x2d\x0d\x00\x00\x2e\x0d\x00\x00", 0xc)
                    edi_9 += 3
                    break
                
                i_8 += 1
                edx_17 += 0x10
            
            void* esi_10 = arg2
            
            if (edi_9 != 0)
                sub_5eb3e0(&var_1f0, 0x18, esi_10, 2, &var_1f0, edi_9, 0, 0)
            
            if (sub_5eb6d0(arg1) != 0)
                int32_t var_a4 = *(arg1 + 0xd4c)
                int32_t ecx_31 = *(arg1 + 0xebc)
                int32_t var_a0_1 = *(arg1 + 0xd50)
                int32_t var_9c_1 = *(arg1 + 0xd54)
                int32_t var_98_1 = *(arg1 + 0xd58)
                int32_t var_94_1 = *(arg1 + 0xd5c)
                int32_t var_90_1 = *(arg1 + 0xd60)
                int32_t var_8c_1 = *(arg1 + 0xd64)
                int32_t var_88_1 = *(arg1 + 0xd68)
                int32_t var_84_1 = *(arg1 + 0xd6c)
                int32_t var_80_1 = *(arg1 + 0xd70)
                
                if (ecx_31 != 0)
                    int32_t var_7c_1 = ecx_31
                
                int32_t eax_54
                eax_54.b = ecx_31 != 0
                uint32_t eax_55 = eax_54 + 0xa
                uint32_t var_220_2 = eax_55
                int32_t esi_11 = eax_55
                
                if (*(arg1 + 0xe64) != 0)
                    eax_55 = sub_58e590(arg1 + 0xd4c, 0)
                    
                    if (eax_55.b == 0)
                        int32_t ecx_33 = esi_11
                        eax_55 = *(arg1 + 0xe64)
                        esi_11 = ecx_33 + 1
                        (&var_a4)[ecx_33] = eax_55
                
                sub_4d4e30(eax_55, &(&var_a4)[esi_11], &var_a4, esi_11, sub_58d5a0)
                int32_t ecx_35
                ecx_35.b = esi_11 == 0xb
                esi_10 = arg2
                
                if (esi_11 == 0xc)
                    ecx_35 = 3
                
                sub_5ebb90(&var_a4, esi_10, ecx_35, 0x23, &var_a4)
            
            float result_4 = result_2
            int32_t i_9 = 0x27
            float result_5 = result_4
            
            do
                int32_t edx_21 = *result_5
                
                if (edx_21 == 0)
                    break
                
                if (edx_21 == 0x70d)
                    __builtin_memcpy(&var_28, 
                        "\x0e\x07\x00\x00\x0f\x07\x00\x00\x10\x07\x00\x00\x11\x07\x00\x00\x12\x07\x00\x00", 
                        0x14)
                    sub_5eb3e0(&var_2c:4, 0x11, esi_10, 2, &var_2c:4, 5, 0, 0)
                    break
                
                i_9 += 1
                result_5 += 0x10
            while (i_9 s<= 0x47)
            
            int32_t i_10 = 0x27
            float result_6 = result_4
            
            do
                int32_t edx_22 = *result_6
                
                if (edx_22 == 0)
                    break
                
                if (edx_22 == 0x718)
                    __builtin_memcpy(&var_2c, 
                        "\x19\x07\x00\x00\x1d\x07\x00\x00\x1a\x07\x00\x00\x1b\x07\x00\x00\x1c\x07\x00\x"
                    "00\x1e\x07\x00\x00", 
                        0x18)
                    void var_20
                    sub_5eb3e0(&var_2c, 0x12, esi_10, 2, &var_2c, 3, &var_20, 3)
                    break
                
                i_10 += 1
                result_6 += 0x10
            while (i_10 s<= 0x47)
            
            int32_t i_11 = 0x27
            float result_7 = result_4
            
            do
                int32_t edx_23 = *result_7
                
                if (edx_23 == 0)
                    break
                
                if (edx_23 == 0x1128)
                    sub_5eb3e0(result_7, 0x13, esi_10, 2, 0x86ed5c, 0xf, 0, 0)
                    break
                
                i_11 += 1
                result_7 += 0x10
            while (i_11 s<= 0x47)
            
            void* eax_60 = var_228
            
            if (eax_60 != 0)
                sub_5eb3e0(&var_204, 0x14, esi_10, 4, &var_204, eax_60, 0, 0)
            
            void* eax_62 = var_22c
            
            if (eax_62 != 0)
                sub_5eb3e0(&var_50, 0x15, esi_10, 4, &var_50, eax_62, 0, 0)
            
            int32_t i_12 = 0x27
            float result_8 = result_4
            
            do
                int32_t edx_24 = *result_8
                
                if (edx_24 == 0)
                    break
                
                if (edx_24 == 0xd30)
                    sub_5eb3e0(result_8, 0x16, esi_10, 4, 0x86ece8, 0xc, 0, 0)
                    break
                
                i_12 += 1
                result_8 += 0x10
            while (i_12 s<= 0x47)
            
            for (int32_t i_13 = 0x27; i_13 s<= 0x47; )
                int32_t ecx_42 = *result_4
                
                if (ecx_42 == 0)
                    break
                
                if (ecx_42 == 0xd3d)
                    sub_5eb3e0(i_13, 0x17, esi_10, 4, 0x86ed18, 0xc, 0, 0)
                    break
                
                i_13 += 1
                result_4 += 0x10
            
            int32_t eax_64 = *(esi_10 + 0x3a20)
            int32_t ecx_44 = eax_64 * 0x74
            result = eax_64 + 1
            *(esi_10 + 0x3a20) = result
            *(ecx_44 + esi_10 + 0x24) = 0
            *(ecx_44 + esi_10 + 0x20) = 0
            *(ecx_44 + esi_10 + 0x2c) = *(esi_10 + 8)
            *(ecx_44 + esi_10 + 0x28) = 0
            bool cond:5_1 = *(esi_10 + 0x3a20) s>= 0x80
            float xmm1_9 = *(esi_10 + 8) + 15f + 120f
            *(esi_10 + 4) = __maxss_xmmss_memss(0x45282000, *(esi_10 + 4))
            *(esi_10 + 8) = xmm1_9
            
            if (not(cond:5_1))
                *(esi_10 + 0x18) = 0x44800000
                *(esi_10 + 0xc) = 0
                int32_t xmm1_10 = _mm_max_ss(0x44800000, xmm1_9 - 1024f)
                *(esi_10 + 0x10) = xmm1_4
                *(esi_10 + 0x1c) = xmm1_10
                CookieCheckFunction(result)
                return result
            
            var_23c_3 = "CalcKingdomView"
            var_240_2 = 0x6841
            ecx_9 = "kv.numEntries < MAX_KINGDOM_VIEW_ENTRIES"
        else
            if (i_3 s<= 0xa)
                int32_t i_14
                int128_t* var_240_7
                int32_t var_23c_7
                void* eax_33
                
                if (i_3 s<= 5)
                    var_23c_7 = 0
                    var_240_7 = nullptr
                    i_14 = i_3
                    eax_33 = &var_3c
                else
                    int32_t eax_31
                    int32_t edx_9
                    edx_9:eax_31 = sx.q(i_3)
                    int32_t i_15 = (eax_31 - edx_9) s>> 1
                    int32_t esi_6 = i_3 - i_15
                    var_23c_7 = esi_6
                    var_240_7 = &var_3c
                    i_14 = i_15
                    eax_33 = &var_3c + (esi_6 << 2)
                
                sub_5eb3e0(eax_33, 8, arg2, 2, eax_33, i_14, var_240_7, var_23c_7)
                goto label_5ec20f
            
            var_23c_3 = "CalcKingdomView"
            var_240_2 = 0x6773
            ecx_9 = "numSplitPiles <= MAX_SPLIT_PILES"
        
        break
else
    var_23c_3 = "KingdomHasDruidBoons"
    var_240_2 = 0x667e
    ecx_9 = "boons[0] != CARD_NONE"

sub_63b870(result, &data_801800, ecx_9, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_240_2, 
    var_23c_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
