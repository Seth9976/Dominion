// 函数: sub_6398e0
// 地址: 0x6398e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = mulu.dp.d(0x80808081, zx.d(arg1[3]) * zx.d(arg2[3]) + 0x80)
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = mulu.dp.d(0x80808081, zx.d(arg1[2]) * zx.d(arg2[2]) + 0x80)
int32_t eax_6
int32_t edx_4
edx_4:eax_6 = mulu.dp.d(0x80808081, zx.d(arg1[1]) * zx.d(arg2[1]) + 0x80)
int32_t eax_7
int32_t edx_9
edx_9:eax_7 = mulu.dp.d(0x80808081, zx.d(*arg1) * zx.d(*arg2) + 0x80)
return zx.d((edx_9 u>> 7).b)
    | ((zx.d((edx u>> 7).b) << 8 | zx.d((edx_2 u>> 7).b)) << 8 | zx.d((edx_4 u>> 7).b)) << 8
