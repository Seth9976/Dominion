// 函数: _Z15DlgShowUpdateElbfP6XAssetif
// 地址: 0x1053838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
int128_t v10
v10.d = fconvert.s(1f)

if ((arg4 & 0x80000000) != 0)
    return 

int64_t* x8_1 = *arg3
v8 = arg5.q
int32_t i_1 = arg4
v9 = arg2.q
int64_t x24_1 = mulu.dp.d(arg4, 0x178) + 0x6c
int32_t i

do
    if (x8_1 == 0)
        if (*(arg3 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(arg3, false, true)
        x8_1 = *arg3
    
    float* x9_3 = **x8_1
    
    if (*(x9_3 + mulu.dp.d(i_1, 0x178) + 4) == 6)
        if ((arg1.d & 1) != 0)
            arg2 = v8.d
        else
            arg2 = fneg(v8.d)
        
        arg2 = arg2 * float.s(0x447a0000) / float.s(*(x9_3 + x24_1)) f+ v9.d
        float temp0_1 = vmin_f32(arg2, fconvert.s(1f))
        
        if (arg2 < 0f)
            v10.d = 0f
        else
            v10.d = temp0_1
        
        break
    
    i = i_1
    i_1 -= 1
    x24_1 -= 0x178
while (i s>= 1)
