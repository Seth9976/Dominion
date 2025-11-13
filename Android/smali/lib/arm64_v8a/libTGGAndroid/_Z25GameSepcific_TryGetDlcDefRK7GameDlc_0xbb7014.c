// 函数: _Z25GameSepcific_TryGetDlcDefRK7GameDlc
// 地址: 0xbb7014
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)

if (x8.d u> 3)
    pthread_kill(pthread_self(), 6)
    return GameSepcific_GetDlcDef(XNoReturn()) __tailcall

int32_t* result_1
int32_t i_2

switch (x8)
    case 0
        int32_t i_3 = DomGetExpansionDlcs(&result_1)
        i_2 = i_3
        
        if (i_3 s>= 1)
            goto label_bb709c
    case 1
        result_1 = &data_1154060
        i_2 = 3
    label_bb709c:
        int32_t* result = result_1
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            if (*result == *(arg1 + 4))
                return result
            
            i = i_1
            i_1 -= 1
            result = &result[0x20]
        while (i != 1)
    case 2
        int32_t i_4 = DomGetPromoDlcs(&result_1)
        i_2 = i_4
        
        if (i_4 s>= 1)
            goto label_bb709c
    case 3
        int32_t i_5 = DomGetBundleDlcs(&result_1)
        i_2 = i_5
        
        if (i_5 s>= 1)
            goto label_bb709c

return nullptr
