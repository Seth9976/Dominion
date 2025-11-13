// 函数: _Z16GetMaterialEntryR10DefSubMeshRK25DefStructureMaterialTable
// 地址: 0xc99890
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(*(arg2 + 8))
int64_t* x19 = *arg2

if (x22.d s> 0)
    char* s2 = *x19
    char* s1 = *(arg1 + 8)
    
    if (strncasecmp(s1, s2, sx.q(strlen(s2))) != 0)
        int64_t x8_1 = 1
        int64_t* x23_1 = x19
        int64_t x24_1
        int32_t i
        
        do
            x24_1 = x8_1
            
            if (x22 == x8_1)
                break
            
            x23_1 = &x23_1[6]
            char* s2_1 = *x23_1
            i = strncasecmp(s1, s2_1, sx.q(strlen(s2_1)))
            x8_1 = x24_1 + 1
        while (i != 0)
        
        if (x24_1 u< x22)
            return x23_1

return x19
