// 函数: Java_com_TGActivity_TGActivity_jni_1getSkus
// 地址: 0x106aa90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XTraceAndLog("c jni_getSKUS")
char* var_2040[0x400]
int32_t x0_1 = GamecenterGetSkus(&var_2040)
int64_t x0_3 = (*(*arg1 + 0x538))(arg1, &data_793a18)
int64_t result = (*(*arg1 + 0x560))(arg1, zx.q(x0_1), (*(*arg1 + 0xf8))(arg1, x0_3), x0_3)

if (x0_1 s>= 1)
    int64_t i = 0
    
    do
        (*(*arg1 + 0x570))(arg1, result, zx.q(i.d), (*(*arg1 + 0x538))(arg1, var_2040[i]))
        i += 1
    while (zx.q(x0_1) != i)

(*(*arg1 + 0xb8))(arg1, x0_3)
return result
