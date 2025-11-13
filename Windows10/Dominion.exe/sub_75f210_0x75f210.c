// 函数: sub_75f210
// 地址: 0x75f210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

double xmm1_1 = arg3 f- *(arg1 + 0x60)

if (not(0 f< xmm1_1))
    if ((*(*arg1 + 0x10))() != 0)
        return 6
    
    xmm1_1 = arg3

long double x87_r7 = fconvert.t(_mm_cvtps_pd(arg1[0x11]) * xmm1_1)
floor(fconvert.d(x87_r7))
int32_t ebx = int.d(fconvert.t(fconvert.d(x87_r7)))

if (ebx != 0)
    double var_1c
    var_1c:4.d = arg2
    int32_t esi
    int32_t temp3_1
    
    do
        esi = divu.dp.d(0:arg5, arg1[0x12])
        
        if (esi s> ebx)
            esi = ebx
        
        var_1c.d = esi
        (*(*arg1 + 4))(arg4, esi, var_1c)
        temp3_1 = ebx
        ebx -= esi
    while (temp3_1 != esi)

*(arg1 + 0x60) = arg3
return 0
