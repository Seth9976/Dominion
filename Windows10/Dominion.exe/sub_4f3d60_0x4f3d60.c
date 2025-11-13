// 函数: sub_4f3d60
// 地址: 0x4f3d60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
float xmm1 = -1e+09f
void* edi = arg2
void* var_41c = edi
int32_t eax_2 = *(arg4 + 0x50)
int32_t edx = *(edi + 0xb4)
float var_414 = -1e+09f
float var_434 = -1f
int32_t i_9 = 0xffffffff
bool var_415

switch (*(arg4 + 0x40) - 3)
    case 0, 4, 6, 9
        var_415 = false
    default
        var_415 = *(*((*(arg3 + 0x1518) << 2) + &data_1779f8c) + 0xc8) != *(arg3 + 0x19e4)

int32_t ebx = data_1779f88

if (ebx s> 0)
    sub_4f3b60(*((ebx << 3) + &data_1777f84) * 0x54 + *(*((ebx << 3) + &data_1777f80) + 0xd0), edi)
    ebx = data_1779f88
    xmm1 = -1e+09f

int32_t esi_1 = 0
int32_t edx_2 = *(edi + 0xd4)
float var_448 = -999f
float var_438 = 0f
float var_424 = 0f
int32_t i_10
int32_t i_5

if (edx_2 s< 4)
    if (edx_2 s> 0)
    label_4f3f2f:
        float* eax_17 = *(edi + 0xd0) + 0x3c + esi_1 * 0x54
        int32_t i_7 = edx_2 - esi_1
        int32_t i
        
        do
            float xmm0_5 = *eax_17
            
            if (ebx == 0)
                xmm0_5 = xmm0_5 f/ *(edx * 0x84 + 0x1777658)
            
            eax_17 = &eax_17[0x15]
            xmm1 = _mm_max_ss(xmm0_5, xmm1)
            i = i_7
            i_7 -= 1
        while (i != 1)
        edi = var_41c
        var_414 = xmm1
        goto label_4f3f5d
    
label_4f3f5d:
    i_10 = *(edi + 0xd4)
    i_5 = i_10
    
    if (i_10 s> 0)
        goto label_4f3f7d
else
    void* eax_13 = *(edi + 0xd0) + 0x90
    int32_t i_6 = ((edx_2 - 4) u>> 2) + 1
    esi_1 = i_6 << 2
    int32_t i_1
    
    do
        float xmm0_1 = *(eax_13 - 0x54)
        
        if (ebx == 0)
            xmm0_1 = xmm0_1 f/ *(edx * 0x84 + 0x1777658)
        
        int32_t xmm0_2 = _mm_max_ss(xmm0_1, xmm1)
        float xmm1_1 = *eax_13
        
        if (ebx == 0)
            xmm1_1 = xmm1_1 f/ *(edx * 0x84 + 0x1777658)
        
        int32_t xmm1_2 = _mm_max_ss(xmm1_1, xmm0_2)
        float xmm0_3 = *(eax_13 + 0x54)
        
        if (ebx == 0)
            xmm0_3 = xmm0_3 f/ *(edx * 0x84 + 0x1777658)
        
        int32_t xmm0_4 = _mm_max_ss(xmm0_3, xmm1_2)
        float xmm1_3 = *(eax_13 + 0xa8)
        
        if (ebx == 0)
            xmm1_3 = xmm1_3 f/ *(edx * 0x84 + 0x1777658)
        
        eax_13 += 0x150
        xmm1 = _mm_max_ss(xmm1_3, xmm0_4)
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)
    edi = var_41c
    var_414 = xmm1
    
    if (esi_1 s< edx_2)
        goto label_4f3f2f
    
    i_5 = *(edi + 0xd4)
label_4f3f7d:
    float* esi_3 = *(edi + 0xd0) + 0x3c
    int32_t i_2
    
    do
        float xmm0_7 = *esi_3
        
        if (ebx == 0)
            xmm0_7 = xmm0_7 f/ *(edx * 0x84 + 0x1777658)
        
        float xmm0_10 = sub_4ea090(ebp, xmm0_7 - xmm1) + var_424
        xmm1 = var_414
        esi_3 = &esi_3[0x15]
        i_2 = i_5
        i_5 -= 1
        var_424 = xmm0_10
    while (i_2 != 1)
    void* edi_4 = var_41c
    int32_t esi_4 = 0
    int32_t var_42c_1 = 0
    float xmm1_5
    float xmm2_2
    int32_t ecx_7
    
    do
        float xmm0_11 = *(esi_4 + *(edi_4 + 0xd0) + 0x3c)
        
        if (ebx == 0)
            xmm0_11 = xmm0_11 f/ *(edx * 0x84 + 0x1777658)
        
        *(esi_4 + *(edi_4 + 0xd0) + 0x48) = sub_4ea090(ebp, xmm0_11 - var_414) / var_424
        
        if (ebx == 0 && data_177750a == ebx.b)
            int32_t eax_21 = *(edi_4 + 0xd0)
            *(esi_4 + eax_21 + 0x48) = (1f f- *(edx * 0x84 + 0x1777650)) f* *(esi_4 + eax_21 + 0x48)
            int32_t eax_22 = *(edi_4 + 0xd0)
            *(esi_4 + eax_22 + 0x48) =
                *(esi_4 + eax_22 + 0x40) f* *(edx * 0x84 + 0x1777650) f+ *(esi_4 + eax_22 + 0x48)
        
        int32_t eax_23 = *(edi_4 + 0xd0)
        bool cond:1_1 = *(esi_4 + eax_23 + 0x38) s<= 0
        float xmm1_4 = *(esi_4 + eax_23 + 0x48)
        xmm2_2 = __maxss_xmmss_memss(xmm1_4, var_434)
        var_434 = xmm2_2
        
        if (cond:1_1)
            xmm1_5 = var_438
        else
            xmm1_5 = xmm1_4 + var_438
            var_438 = xmm1_5
        
        esi_4 += 0x54
        i_10 = *(edi_4 + 0xd4)
        ecx_7 = var_42c_1 + 1
        var_42c_1 = ecx_7
    while (ecx_7 s< i_10)
    int32_t i_3 = 0
    int32_t i_4 = 0
    
    if (i_10 s> 0)
        i_10 = 0
        int32_t i_11 = 0
        void* edx_4 = (eax_2 << 2) + 0x1c
        void* var_42c_2 = edx_4
        int32_t i_8
        
        do
            int32_t* esi_5 = *(edi_4 + 0xd0)
            
            if (*(esi_5 + i_10 + 0x51) != 0)
                i_8 = i_9
            else
                int32_t ecx_8 = *(esi_5 + i_10 + 0x38)
                float var_414_1
                void* esi_6
                int32_t* edi_7
                
                if (ecx_8 s<= 0)
                    edi_7 = esi_5
                    var_414_1 = *(edi_4 + (eax_2 << 2) + 0x94)
                    
                    if (not(xmm2_2 f<= *(esi_5 + i_10 + 0x48)))
                        i_10 = arg3
                        
                        if (*(i_10 + 0x1504) != 5)
                            float xmm0_30
                            i_10, xmm0_30 = sub_4ac580(ebp, xmm1_5)
                            var_414_1 = var_414_1 - xmm0_30 * 0.200000003f
                    
                    esi_6 = var_41c
                else
                    float xmm2_3 = *(esi_5 + edx_4)
                    int32_t edx_5 = *(esi_5 + i_10 + 0x4c)
                    var_414_1 = xmm2_3
                    
                    if (edx_5 == 0 || eax_2 != edx || *(arg3 + 0x1504) == 5)
                        edi_7 = esi_5
                        
                        if (edx_5 != 0)
                            var_414_1 = xmm2_3
                            
                            if (eax_2 != edx)
                                var_414_1 = xmm2_3
                                
                                if (*(arg3 + 0x1504) != 5)
                                    edi_7 = esi_5
                                    var_414_1 = xmm2_3 - 1f
                    else
                        edi_7 = esi_5
                        var_414_1 = 10f / _mm_cvtepi32_ps(zx.o(edx_5)) + xmm2_3
                    
                    esi_6 = var_41c
                    
                    if (ebx == 0)
                        float xmm0_22 = *(i_10 + edi_7 + 0x48)
                        i_10 = int.d(sub_4ac580(ebp, 
                            (xmm0_22 + xmm0_22) * _mm_cvtepi32_ps(zx.o(*(esi_6 + 0xb0)))))
                        
                        if (ecx_8 s< i_10)
                            var_414_1 = var_414_1 + 1f
                
                float xmm0_33 = sub_4f3c60(i_10, *(i_11 + edi_7 + 0x38), edx * 0x84 + 0x1777620, 
                    *(i_11 + edi_7 + 0x48), *(esi_6 + 0xb0)) + var_414_1
                edi_4 = var_41c
                
                if (var_415 != 0)
                    xmm0_33 = *(i_11 + *(edi_4 + 0xd0) + 0x48)
                
                i_3 = i_4
                ebx = data_1779f88
                i_10 = i_11
                edx_4 = var_42c_2
                xmm2_2 = var_434
                
                if (xmm0_33 <= var_448)
                    i_8 = i_9
                else
                    i_8 = i_3
                    var_448 = xmm0_33
                    i_9 = i_8
            
            i_3 += 1
            xmm1_5 = var_438
            edx_4 += 0x54
            i_10 += 0x54
            i_4 = i_3
            var_42c_2 = edx_4
            i_11 = i_10
        while (i_3 s< *(edi_4 + 0xd4))
        
        if (i_8 s>= 0)
            int32_t esi_8 = i_8 * 0x54
            *(*(edi_4 + 0xd0) + esi_8 + 0x50) = 1
            
            if (ebx == 0x3ff)
                uint32_t eax_26
                eax_26.b = 0
                CookieCheckFunction(eax_26)
                return eax_26
            
            *((ebx << 3) + &data_1777f88) = edi_4
            *((ebx << 3) + &data_1777f8c) = i_9
            data_1779f88 = ebx + 1
            sub_4f02f0(edi_4, *(edi_4 + 0xd0) + esi_8)
            
            if (data_177750b != 0)
                int32_t var_464_3 = *(arg4 + 0x4c)
                void* ecx_15 = sub_4f7f30(" -- Extracted %d ")
                int32_t eax_31 = *(edi_4 + 0xd0) + esi_8
                int32_t var_46c_1 = eax_31
                char var_410[0x404]
                sub_4eb890(eax_31, &var_410, ecx_15, edi_4)
                char (* var_474_1)[0x404] = &var_410
                sub_4f7f30("%s")
                
                if (*(arg4 + 0x6c) == 1)
                    int32_t var_464_4 = *(arg4 + 0x70)
                    sub_4f7f30(" %x")
                
                sub_4f7f30(U"\n")
            
            uint32_t eax_29
            eax_29.b = 1
            CookieCheckFunction(eax_29)
            return eax_29
sub_63b870(i_10, &data_801800, "best_i >= 0", "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 
    0x1531, "SearchNode")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
