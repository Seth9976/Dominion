// 函数: _Z16AddExtraCardData14DomGameVersionR14DomSetupConfig11DomCardEnumRK10StringSpan
// 地址: 0x9e75b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
DomCardDef* x0_1 = DomDefGet(zx.q(arg3), zx.q(x21))
int32_t var_44
int32_t i_3 = HasRandomExtraPileSetup(x0_1, &var_44, nullptr, nullptr)
int32_t i_2 = i_3

if (i_3 == 0)
    i_2 = HasGenerateExtraPileSetup(x0_1, &var_44, nullptr, nullptr)

int128_t var_140
__builtin_memset(&var_140, 0, 0xf0)
int64_t result

if (arg3 != 0xd00)
    result = AddCards(&var_140, i_2, x21, arg2, arg4, 1, nullptr, 0)
    
    if (i_2 s>= 1)
    label_9e76a0:
        int32_t x8_1 = var_44
        uint64_t i_1 = zx.q(i_2)
        int128_t* x10_1 = &var_140
        uint64_t i
        
        do
            int32_t x12_1 = *x10_1
            
            if (x12_1 == 0)
                break
            
            void* x13_1 = arg2 + (sx.q(x8_1) << 4)
            x8_1 += 1
            i = i_1
            i_1 -= 1
            x10_1 += 4
            *(x13_1 + 0x1c0) = 1
            *(x13_1 + 0x1c4) = x12_1
            *(x13_1 + 0x1c8) = 0
        while (i != 1)
else
    result = AddCards(nullptr, 0, x21, arg2, arg4, 0, &var_140, i_2)
    
    if (i_2 s>= 1)
        goto label_9e76a0

return result
