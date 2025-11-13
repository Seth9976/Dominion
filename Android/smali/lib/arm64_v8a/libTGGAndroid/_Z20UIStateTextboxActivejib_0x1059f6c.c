// 函数: _Z20UIStateTextboxActivejib
// 地址: 0x1059f6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3.d
UIState* x19 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
UIStateElement* result = UIStateElementGet(x19, arg2, &data_793a18)
int64_t* x22 = *(x19 + 8)
UIStateElement* result_1 = result
int64_t* x8_1 = *x22
uint32_t x9_1

if (x8_1 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    result = AssetCatalogLoadAsset(x22, false, true)
    x8_1 = *x22
    x9_1 = zx.d(*(result_1 + 0x188))
    
    if (x9_1 != 0 || (x20 & 1) == 0)
        goto label_105a080
    
    goto label_105a020

x9_1 = zx.d(*(result_1 + 0x188))

if (x9_1 == 0 && (x20 & 1) != 0)
label_105a020:
    UIElement* x1_1 = **x8_1 + sx.q(arg2) * 0x178
    *(result_1 + 0x1d0) = *(x1_1 + 0xe8)
    *(result_1 + 0x1e4) = *(x1_1 + 0xf0)
    int32_t x8_7 = *(x1_1 + 0xf4)
    *(result_1 + 0x1f8) = -0x20294700878da0
    *(result_1 + 0x1f4) = x8_7
    *(result_1 + 0x200) = *(x1_1 + 0x114)
    *(result_1 + 0x20c) = *(x1_1 + 0xfc)
    UIStateElementText(result_1, x1_1)
    result = XString::operator=(result_1 + 0x190)
    
    if (zx.d(*(result_1 + 0x188)) == 0)
        result = UITextBox::SelectAll()
    
    *(result_1 + 0x188) = 1
else
label_105a080:
    
    if (x9_1 != 0 && (x20 & 1) == 0)
        *(result_1 + 0x188) = 0

return result
