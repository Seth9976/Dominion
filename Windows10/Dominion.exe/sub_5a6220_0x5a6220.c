// 函数: sub_5a6220
// 地址: 0x5a6220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
void* esi = arg2
void* var_20 = esi
int32_t var_18 = 0

if (*(esi + 0x1c4) s<= 0)
    return 

void* ebx_1 = arg6
void* edi = esi + 8
void* var_14_1 = edi
int32_t* ecx = ebx_1 + 8
void* var_10_1 = ecx
int32_t var_38_5
char const* const ecx_13

while (true)
    arg1 = *(edi - 4)
    
    if (arg1 u> 9)
        break
    
    switch (arg1)
        case 0
            float xmm0_2 = sub_4ae0f0(ebp, *edi)
            float xmm0_4 = sub_4ae0d0(ebp, *edi)
            void* eax = ebx_1 + 8
            float xmm2_2 = data_b4a5b4 f+ *(edi + 4)
            float xmm3_2 = data_b4a5b8 f+ *(edi + 8)
            int32_t i_4 = 0x4000
            int32_t i
            
            do
                *eax = ((*(eax - 8) - xmm2_2) * xmm0_4 + (*(eax - 4) - xmm3_2) * xmm0_2) f*
                    *(edi + 0xc) f+ *eax
                eax += 0xc
                i = i_4
                i_4 -= 1
            while (i != 1)
        case 1
            int32_t* esi_1 = ecx
            int32_t i_5 = 0x4000
            float xmm2_4 = data_b4a5b4 f+ *(edi + 4)
            float xmm3_4 = data_b4a5b8 f+ *(edi + 8)
            float var_14_3 = xmm2_4
            float var_c_1 = xmm3_4
            int32_t i_1
            
            do
                float xmm1_8 = esi_1[-2] f- xmm2_4
                float xmm0_9 = esi_1[-1] f- xmm3_4
                float xmm0_14 = sub_4ac580(ebp, xmm0_9 * xmm0_9 + xmm1_8 * xmm1_8) f* *edi f+ *esi_1
                *esi_1 = xmm0_14
                float xmm2_5 = xmm0_14
                
                if (not(0 f<= *edi) && not(xmm0_14 f<= 0))
                    *esi_1 = 0
                    xmm2_5 = (zx.o(0)).d
                
                if (not(*edi f<= 0) && not(0 f<= xmm2_5))
                    *esi_1 = 0
                
                xmm2_4 = var_14_3
                esi_1 = &esi_1[3]
                xmm3_4 = var_c_1
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            ebx_1 = arg6
            esi = var_20
        case 2
            int32_t* var_34_1 = ecx
            sub_5a4a90(esi, ebx_1)
        case 3
            int32_t* var_34_2 = ecx
            sub_5a5040(arg1, edi, arg3, esi.w, edi, ebx_1)
        case 4
            sub_5a4d70(ebx_1)
        case 5
            int32_t* esi_2 = ecx
            int32_t i_6 = 0x4000
            int32_t i_2
            
            do
                uint32_t xmm0_16[0x4] = *esi_2
                int32_t* var_34_3 = ecx
                float var_34_4 = fconvert.s(fconvert.t(xmm0_16))
                double xmm0_18 = fconvert.d(sub_4ae0b0(xmm0_16))
                
                if (0 f> xmm0_18)
                    ecx = _libm_sse2_sqrt_precise(var_34_4, arg5, arg4)
                else
                    xmm0_18 = _mm_sqrt_sd(xmm0_18, xmm0_18)
                
                int32_t* var_38_3 = ecx
                long double x87_r7_2 = fconvert.t(fconvert.s(xmm0_18))
                ecx = copysignf(fconvert.s(x87_r7_2), var_34_4)
                *esi_2 = fconvert.s(x87_r7_2)
                esi_2 = &esi_2[3]
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
            ebx_1 = arg6
            esi = var_20
        case 6
            sub_5a4f40()
        case 7
            int32_t* var_34_5 = ecx
            sub_5a53a0(edi)
        case 8
            int32_t var_c_4 = 0x3dcccccd
            sub_5a5670()
            int32_t i_7 = 3
            int32_t i_3
            
            do
                sub_5a5ba0(arg7, arg7)
                sub_5a5670()
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
            edi = var_14_1
            *(arg7 + 0x175fcc) = 1
            sub_5a5840(i_7, arg7 + 0x185fd0)
            esi = var_20
        case 9
            sub_5a5cd0()
    
    int32_t* edx_5 = var_10_1
    arg1 = 0
    int32_t xmm0_20 = *edx_5
    
    while (true)
        if (100f f<= xmm0_20)
            char const* const var_34_9 = "GenerateHeightmap"
            var_38_5 = 0x5bb
            ecx_13 = "mesh.points[i].z < 100.0f"
            goto label_5a6563
        
        if (xmm0_20 f<= -100f)
            char const* const var_34_8 = "GenerateHeightmap"
            var_38_5 = 0x5bc
            ecx_13 = "mesh.points[i].z > -100.0f"
            goto label_5a6563
        
        arg1 += 1
        
        if (arg1 s>= 0x4000)
            edi += 0x1c
            int32_t ecx_12 = var_18 + 1
            var_14_1 = edi
            var_18 = ecx_12
            var_10_1 = &edx_5[3]
            
            if (ecx_12 s>= *(esi + 0x1c4))
                return 
            
            ecx = ebx_1 + 8
            break

char const* const var_34_10 = "GenerateHeightmap"
var_38_5 = 0x5b6
ecx_13 = "Halt"
label_5a6563:
sub_63b870(arg1, &data_801800, ecx_13, "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", var_38_5, 
    "GenerateHeightmap")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
