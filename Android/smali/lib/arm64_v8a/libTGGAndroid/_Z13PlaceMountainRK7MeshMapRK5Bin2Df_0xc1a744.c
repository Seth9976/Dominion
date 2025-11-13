// 函数: _Z13PlaceMountainRK7MeshMapRK5Bin2Df
// 地址: 0xc1a744
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_60 = v9
float v8 = arg3
int64_t i = 0
void* __offset(MeshMap, 0x8) x21 = arg1 + 8
int32_t var_10060[0x3ffc]

do
    float v2 = *(x21 - 8)
    float v1 = *(x21 - 4)
    float var_10068 = v2
    float var_10064_1 = v1
    v9.d = *x21
    
    if (v9.d f<= 0f)
        arg3 = float.s(0xc97423f0)
    else
        arg3 = float.s(0xc97423f0)
        
        if (not(v1 > float.s(0x3f79999a)) && not(v2 < float.s(0x3ccccccd))
                && not(v2 > float.s(0x3ffccccd)) && not(v1 < float.s(0x3ccccccd)))
            if ((Bin2DQuery(arg2, &var_10068, 0, v8) & 1) != 0)
                arg3 = float.s(0xc97423f0)
            else
                arg3 = v9.d f* v9.d
    
    *(&var_10060 + i) = arg3
    i += 4
    x21 += 0xc
while (i != 0x10000)

uint64_t result = 0

for (int64_t i_1 = 1; i_1 != 0x4000; i_1 += 1)
    if (var_10060[i_1] f> var_10060[sx.q(result.d)])
        result = zx.q(i_1.d)
    else
        result = zx.q(result.d)

return result
