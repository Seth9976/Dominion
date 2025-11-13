// 函数: sub_7198c0
// 地址: 0x7198c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = (&data_cb3cb0)[arg1 * 2]
int32_t var_84 = arg1
int32_t eax_1
eax_1.b = arg2 > 1f

if (eax_1 == 0)
    float var_48_2 = fconvert.s(arg3)
    int32_t _X_1 = eax(arg2)
    var_48_2.q = _mm_cvtps_pd(var_48_2 + var_48_2)
    long double x87_r0_1 = fconvert.t(var_48_2.q)
    _X_1.q = fconvert.d(x87_r0_1)
    ceil(_X_1)
    var_48_2.q = fconvert.d(x87_r0_1)
    return int.d(fconvert.t(var_48_2.q))

float var_48_1 = fconvert.s(arg3)
int32_t _X = eax(1f / arg2)
var_48_1.q = _mm_cvtps_pd(var_48_1 + var_48_1)
long double x87_r0 = fconvert.t(var_48_1.q)
_X.q = fconvert.d(x87_r0)
ceil(_X)
var_48_1.q = fconvert.d(x87_r0)
return int.d(fconvert.t(var_48_1.q))
