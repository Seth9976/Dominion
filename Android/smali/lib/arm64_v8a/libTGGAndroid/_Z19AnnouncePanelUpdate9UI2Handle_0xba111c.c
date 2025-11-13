// 函数: _Z19AnnouncePanelUpdate9UI2Handle
// 地址: 0xba111c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, AnnouncePanelClick)
uint32_t x0 = *gAnnouncementDlg
void* result
UI2StateDecl* x1_1
char const (** const x20_1)[0xb]
int64_t i_1

if (x0 == 0)
    x20_1 = &data_11507f8
    x1_1 = &data_1832be0
    data_182a744 = 4
    i_1 = 3
label_ba11e0:
    UI2SetState(zx.q(x19), x1_1, 0xffffffff, 0)
    int32_t* x24_1 = &x20_1[1]
    int32_t* x25_1 = &data_18271a0
    int64_t i
    
    do
        char* x21_2 = *(x24_1 - 8)
        
        if (*(x25_1 - 0x30) == x21_2 && x25_1[-0xe] == x19 && x25_1[-0xa] == 0xffffffff)
            result = UI2Exists(zx.q(*x25_1))
        
        int32_t x20_2
        
        if (*(x25_1 - 0x30) == x21_2 && x25_1[-0xe] == x19 && x25_1[-0xa] == 0xffffffff
                && (result.d & 1) != 0)
            x20_2 = *x25_1
            
            if (x20_2 != 0)
                goto label_ba1204
        else
            result = UI2GetHandle(zx.q(x19), x21_2)
            *x25_1 = result.d
            
            if (result.d != 0)
                x20_2 = result.d
                *(x25_1 - 0x30) = x21_2
                x25_1[-0xe] = x19
                x25_1[-0xa] = 0xffffffff
            label_ba1204:
                DomCardDef* x0_3 = DomDefGet(zx.q(*x24_1), 0x18)
                DomDeclareCardComponents(zx.q(x20_2), x0_3, nullptr, 0, 0)
                DomDeclareType(zx.q(x20_2), x0_3, 0)
                result = DomDeclareExpansion(zx.q(x20_2), x0_3)
        x25_1 = &x25_1[0x10]
        i = i_1
        i_1 -= 1
        x24_1 = &x24_1[4]
    while (i != 1)
else
    result = GameClientTryGetServerNotification(x0)
    int32_t x8_2
    
    if (result == 0)
        x8_2 = data_182a744 - 1
        
        if (x8_2 u<= 3)
        label_ba11b4:
            int64_t x8_4 = zx.q(x8_2) << 0x20 s>> 0x1d
            x1_1 = *(&data_1153f98 + x8_4)
            i_1 = *(&data_7b00a0 + x8_4)
            x20_1 = *(&data_1153fb8 + x8_4)
            goto label_ba11e0
    else
        int32_t x8_1 = *(result + 4)
        data_182a744 = x8_1
        x8_2 = x8_1 - 1
        
        if (x8_2 u<= 3)
            goto label_ba11b4
return result
