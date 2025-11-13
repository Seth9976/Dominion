// 函数: sub_71d530
// 地址: 0x71d530
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t* var_40 = arg1
int32_t eax = arg1[6]
float xmm0 = arg1[0xf]
float var_40_1 = xmm0
(&data_cb3cb0)[arg1[0x15] * 2]()
int32_t ebx = arg1[0x25]
int32_t eax_4 = arg1[2] + ebx
int32_t ebx_1 = neg.d(ebx)
int32_t var_10 = ebx_1
float var_c = fconvert.s(arg2 / fconvert.t(xmm0))

while (ebx_1 s< eax_4)
    float xmm0_2 = float.s(ebx_1) + 0.5f
    long double x87_r0_1 = fconvert.t(_mm_cvtps_pd((xmm0_2 - var_c) * xmm0 f- arg1[0xd]) + 0.5)
    floor(fconvert.d(x87_r0_1))
    double var_2c_2 = fconvert.d(x87_r0_1)
    int32_t edi = int.d(fconvert.t(var_2c_2))
    long double x87_r0_2 = fconvert.t(_mm_cvtps_pd((xmm0_2 + var_c) * xmm0 f- arg1[0xd]) - 0.5)
    floor(fconvert.d(x87_r0_2))
    double var_24_2 = fconvert.d(x87_r0_2)
    
    if (int.d(fconvert.t(var_24_2)) s>= 0 && edi s< eax)
        sub_71d440(arg1, edi)
        sub_71a2f0(arg1, ebx_1, arg1, edi)
        float* edi_1 = arg1[0x1f]
        double var_44_2
        var_44_2.d = 0
        memset(edi_1, 0, (arg1[0x10] * arg1[5]) << 2)
        int32_t eax_9
        eax_9.b = arg1[0xe] f> 1f
        
        if (eax_9 == 0)
            sub_71b6c0(arg1, edi_1)
        else
            sub_71b360(arg1, edi_1)
        
        int32_t ebx_2 = arg1[0x2c]
        
        if (ebx_2 s< 0)
            int32_t eax_10 = int.d(fconvert.t(var_2c_2))
            arg1[0x2c] = 0
            uint32_t count = arg1[0x28]
            arg1[0x2b] = eax_10
            var_44_2.d = 0
            int32_t var_48_2 = arg1[0x2d]
            arg1[0x2a] = eax_10
            memset(var_48_2, 0, count)
            ebx_2 = 0
        
        int32_t i = arg1[0x2b]
        
        if (int.d(fconvert.t(var_24_2)) s> i)
            uint32_t ecx_4 = arg1[0x28] u>> 2
            uint32_t var_14_2 = ecx_4
            
            do
                i += 1
                var_44_2.d = 0
                memset(
                    arg1[0x2d]
                        + ((ecx_4 * mods.dp.d(sx.q(ebx_2 - arg1[0x2a] + i), arg1[0x29])) << 2), 
                    0, arg1[0x28])
                ecx_4 = var_14_2
            while (int.d(fconvert.t(var_24_2)) s> i)
            
            arg1[0x2b] = i
        
        ebx_1 = var_10
        sub_71d090(arg1, ebx_1)
    
    ebx_1 += 1
    var_10 = ebx_1

return sub_71d440(arg1, arg1[6])
