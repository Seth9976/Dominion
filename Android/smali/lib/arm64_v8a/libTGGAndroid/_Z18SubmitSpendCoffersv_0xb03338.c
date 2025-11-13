// 函数: _Z18SubmitSpendCoffersv
// 地址: 0xb03338
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gDomClient + 0x38)
int32_t x8_1

x8_1 = x8 == 0xffffffff ? 0 : x8

if (*(gDomClient + 0x2079c) != x8_1 || *(gDomClient + 0x207a0) != LocalWho().d)
    return 

int32_t x8_2 = *(gDomClient + 0x20758)

if (x8_2 - 2 u>= 2 && x8_2 != 0xfd)
    return 

if (*(GetClient() + 0xc) != *(GetClient() + 0x10))
    return XTraceAndLog("failed to submit coffers click, waiting") __tailcall

DomYield var_d40
YldCopy(&var_d40, gDomClient + 0x20748)
int32_t var_d3c_1 = 9
int32_t var_ccc_1 = 1
SubmitAction(LocalWho(), &var_d40)
