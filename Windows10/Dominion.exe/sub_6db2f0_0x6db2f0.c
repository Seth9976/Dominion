// 函数: sub_6db2f0
// 地址: 0x6db2f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = data_147abe8
float* ebx = arg1
float* var_14 = ebx

if (eax == 0)
    sub_63b870(eax, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* ecx = *eax
int32_t edx = 0
int32_t xmm2 = (zx.o(0)).d
int32_t* var_8 = ecx
int32_t var_10 = 0
int32_t* i = nullptr
int32_t var_c = 0
label_6db326:

if (i != 0)
    i = &i[0x1b]
else
    i = *ecx

for (; i u< ecx[1] * 0x6c + *ecx; i = &i[0x1b])
    int32_t j = i[0x1a]
    
    if ((j & 0xffff0000) != 0)
        int32_t* eax_2 = *arg2
        int32_t* eax_3
        
        if (eax_2 != 0)
            eax_3 = *eax_2
        
        if (eax_2 == 0 || eax_3 == 0)
        label_6db3b3:
            int32_t eax_4 = arg2[1]
            
            if (eax_4 != 0)
                xmm2 = var_c
                ecx = var_8
                edx = var_10
                
                if (eax_4(arg2, j) == 0)
                    goto label_6db326
            
            ebx.b = arg2[3].b
            xmm2 = var_c
            ecx = var_8
            edx = var_10
            int32_t* var_18
            
            if (sub_6da9e0(&var_18, var_14, i, &var_18) == 0)
                ebx = var_14
                goto label_6db326
            
            bool cond:0_1 = ebx.b == 0
            ebx = var_14
            
            if (not(cond:0_1))
                xmm2 = var_c
                ecx = var_8
                edx = var_10
                
                if (sub_6daff0(&var_18, ebx, i, &var_18) == 0)
                    goto label_6db326
            
            edx = var_10
            float xmm0_4 = var_18
            
            if (edx != 0)
                xmm2 = var_c
                ecx = var_8
                
                if (xmm2 f<= xmm0_4)
                    goto label_6db326
            
            edx = i[0x1a]
            xmm2 = xmm0_4
            var_c = xmm2
            var_10 = edx
        else
            while (*eax_3 != j)
                eax_3 = eax_3[1]
                
                if (eax_3 == 0)
                    goto label_6db3b3
        
        ecx = var_8
        goto label_6db326

int32_t result

if (edx == 0)
    result.b = 0
    return result

result.b = 1
float xmm1_2 = xmm2 f* ebx[4] + ebx[1]
float xmm0_3 = xmm2 f* ebx[5] + ebx[2]
arg2[4] = xmm2 f* ebx[3] + *ebx
arg2[5] = xmm1_2
arg2[6] = xmm0_3
arg2[7] = edx
return result
