// 函数: _Z21DefParseReadDataArrayPvPK8DefFieldP12DefParseItem
// 地址: 0xc8bd4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = DefinitionGetFieldData(arg1, arg2)
void* x24 = *(arg3 + 0x18)
int64_t* i = *(x24 + 8)

while (i != 0)
    *i
    i = i[1]
    
    if (strcasecmp(XString::operator char const*(), "mFreeListHead") == 0)
        sscanf(XString::operator char const*(), "%d", &x0[2])
        break

int64_t* i_1 = *(x24 + 8)

while (i_1 != 0)
    *i_1
    i_1 = i_1[1]
    
    if (strcasecmp(XString::operator char const*(), "mUsedCount") == 0)
        sscanf(XString::operator char const*(), "%d", x0 + 0x14)
        break

int64_t* i_2 = *(x24 + 8)

while (i_2 != 0)
    *i_2
    i_2 = i_2[1]
    
    if (strcasecmp(XString::operator char const*(), "mNextKey") == 0)
        sscanf(XString::operator char const*(), "%d", &x0[3])
        break

int64_t result = DefinitionGetSize(*(arg2 + 0x30))
void** i_3 = *(x24 + 8)

if (i_3 != 0)
    int64_t x9_1 = sx.q(result.d + 4)
    int64_t x8_1 = sx.q(result.d + 4)
    
    do
        void* x26_1 = *i_3
        i_3 = i_3[1]
        result = strcasecmp(XString::operator char const*(), "item")
        
        if (result.d == 0)
            int32_t var_64 = 0
            int64_t* j = *(*(x26_1 + 0x18) + 8)
            
            while (j != 0)
                *j
                int64_t* j_2 = j[1]
                result = strcasecmp(XString::operator char const*(), "slot")
                j = j_2
                
                if (result.d == 0)
                    result = sscanf(XString::operator char const*(), "%d", &var_64)
                    break
            
            int64_t* j_1 = *(*(x26_1 + 0x18) + 8)
            int32_t var_68
            
            while (j_1 != 0)
                *j_1
                int64_t* j_3 = j_1[1]
                result = strcasecmp(XString::operator char const*(), "id")
                j_1 = j_3
                
                if (result.d == 0)
                    result = sscanf(XString::operator char const*(), "%d", &var_68)
                    break
            
            int32_t fp_1 = var_68
            void* x27_3 = *x0 + sx.q(var_64) * x8_1
            *(x27_3 + x9_1 - 4) = fp_1
            void* x8_9 = *(x26_1 + 0x18)
            DefParseItem* x26_2
            
            if (x8_9 == 0)
                x26_2 = nullptr
            else
                DefParseItem** x8_10 = *(x8_9 + 8)
                
                do
                    if (x8_10 == 0)
                        x26_2 = nullptr
                        
                        if (fp_1 u< 0x10000)
                            goto label_c8bebc
                        
                        goto label_c8bfd0
                    
                    x26_2 = *x8_10
                    DefParseItem** x24_1 = x8_10[1]
                    result = strcasecmp(XString::operator char const*(), "value")
                    x8_10 = x24_1
                while (result.d != 0)
            
            if (fp_1 u>= 0x10000)
            label_c8bfd0:
                int32_t x0_32 = DefTypeCanBeInArray(*(arg2 + 0x30))
                DefMap* x1_1 = *(arg2 + 0x30)
                
                if ((x0_32 & 1) == 0)
                    DefTypeIsBuiltIn(x1_1)
                    result = DefParseReadBlock(x27_3, *(arg2 + 0x30), *(x26_2 + 0x18), false)
                else
                    result = DefParseReadSimpleField(x27_3, x1_1, arg2, x26_2)
            
        label_c8bebc:
            x0[1].d += 1
    while (i_3 != 0)

return result
