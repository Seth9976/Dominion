// 函数: _Z8sInflateP14SphereTreeNode
// 地址: 0xfa9d08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SphereTreeNode* i = arg1
int64_t result

do
    if ((SphereContainsSphere(i, *(i + 0x18)) & 1) != 0)
        result = SphereContainsSphere(i, *(i + 0x20))
        
        if ((result.d & 1) != 0)
            break
    
    int32_t v0_1
    int32_t v1_1
    int32_t v2_1
    int32_t v3_1
    result, v0_1, v1_1, v2_1, v3_1 = SphereUnion(*(i + 0x18), *(i + 0x20))
    *i = v0_1
    *(i + 4) = v1_1
    *(i + 8) = v2_1
    *(i + 0xc) = v3_1
    i = *(i + 0x10)
while (i != 0)

return result
