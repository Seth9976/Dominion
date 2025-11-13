// 函数: _Z14LogLinesUpdate9UI2Handle
// 地址: 0xb48498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x0 = LocalWho()
void* x0_1 = ActiveGame()
GetClient()
int32_t x0_3 = GetLogStyleFlag(gDomClient + 0x20728, gDomClient + 0x81450)
int32_t x8_1

if (*(x0_1 + 0x2c) == 2)
    x8_1 = 0
else
    x8_1 = x0_3

int32_t x22

if (*(gLogData + 0xc14) == 1)
    x22 = 2
else
    x22 = x8_1

int32_t x0_5 = DomLogTotalLines(zx.q(x22), zx.q(x0))
UI2SetInt(zx.q(x19), &data_1832ce8, x0_5, 0xffffffff)
LanguageStateSet(zx.q(x19))
int32_t x8_2 = *(GetLocalSettings() + 0x28)

if (x8_2 != 0)
    int64_t (* const x1_2)()
    
    if (x8_2 == 1)
        x1_2 = UIS_TEXT_LARGE
    else
        if (x8_2 != 2)
            pthread_kill(pthread_self(), 6)
            XNoReturn()
            return LogIsAtBottom() __tailcall
        
        x1_2 = UIS_TEXT_JUMBO
    
    UI2SetState(zx.q(x19), x1_2, 0xffffffff, 0)
    UI2SetState(zx.q(x19), &data_182c748, 0xffffffff, 0)

int32_t x0_12

if (data_182ac68 == "tbl_logEntries" && data_182a9b8 == x19 && zx.d(data_182a6f8) != 0)
    x0_12 = UI2Exists(zx.q(data_182a9c0))

uint64_t x0_13

if (data_182ac68 != "tbl_logEntries" || data_182a9b8 != x19 || zx.d(data_182a6f8) == 0
        || (x0_12 & 1) == 0)
    x0_13 = UI2GetHandle(zx.q(x19), "tbl_logEntries")
    data_182a9c0 = x0_13.d
    
    if (x0_13.d != 0)
        data_182ac68 = "tbl_logEntries"
        data_182a9b8 = x19
        data_182a6f8 = 1
else
    x0_13 = zx.q(data_182a9c0)

int64_t x0_15 = UI2TableGetRange(x0_13)
int32_t x26 = (x0_15 u>> 0x20).d - x0_15.d
int32_t x28 = x0_15.d & not.d(x0_15.d s>> 0x1f)
int32_t x23

x23 = x0_5 s< x26 ? x0_5 : x26

*(gLogData + 0xc00) = x28
int32_t var_70 = x0
uint64_t result = DomLogGetLines(zx.q(GetCurrentLanguage()), ActiveGame(), gDomClient + 0x20728, 
    zx.q(LocalWho()), zx.q(*(gLogData + 0xc00)), zx.q(x23), gLogData, zx.q(x22))
int32_t x8_7 = *(gLogData + 0xc10)
*(gLogData + 0xc04) = result.d
uint64_t var_68

if (x8_7 != x0_5 && zx.d(*(gLogData + 0xc0c)) == 0)
    int32_t x8_9 = x0_5 - x23
    var_68 = zx.q(x8_9) | zx.q(x0_5) << 0x20
    var_68.d = x8_9 & not.d(x8_9 s>> 0x1f)
    UI2TableSetRange(zx.q(x19), &var_68, (x0_5 s>= x26 ? 1 : 0).b)
    result = zx.q(*(gLogData + 0xc04))
    *(gLogData + 0xc10) = x0_5
    
    if ((result.d & 0x80000000) != 0)
        result = 0
        *(gLogData + 0xc04) = 0
else if (*(gLogData + 0xc00) + result.d s>= x0_5)
    *(gLogData + 0xc0c) = 0
    *(gLogData + 0xc10) = x0_5
    
    if ((result.d & 0x80000000) != 0)
        result = 0
        *(gLogData + 0xc04) = 0
else
    *(gLogData + 0xc0c) = 1
    *(gLogData + 0xc10) = x0_5
    
    if ((result.d & 0x80000000) != 0)
        result = 0
        *(gLogData + 0xc04) = 0

if (*(gDomClient + 0x20588) != 0)
    int32_t x8_14 = x0_5 - x23
    bool x2_3 = (zx.d(*(gLogData + 0xc0c)) == 0 ? 1 : 0).b
    var_68 = (zx.q(x8_14) & zx.q(not.d(x8_14 s>> 0x1f))) | zx.q(x0_5) << 0x20
    UI2TableSetRange(zx.q(x19), &var_68, x2_3)
    result = zx.q(*(gLogData + 0xc04))
    *(gDomClient + 0x20588) -= 1

if (result.d s>= 1)
    int64_t i = 0
    void* x28_1 = &data_18285b8
    XString* x20_1 = gLogData
    
    do
        int64_t x24_1 = zx.q(x28) + i
        result = UI2GetChild(zx.q(x19), x24_1.d)
        
        if (result.d != 0)
            int32_t x23_1 = result.d
            int32_t x0_24
            
            if (*(x28_1 - 0x30) == "txt_entry" && *(x28_1 - 0x38) == x23_1
                    && *(x28_1 - 0x28) == 0xffffffff)
                x0_24 = UI2Exists(zx.q(*x28_1))
            
            uint64_t x0_25
            
            if (*(x28_1 - 0x30) != "txt_entry" || *(x28_1 - 0x38) != x23_1
                    || *(x28_1 - 0x28) != 0xffffffff || (x0_24 & 1) == 0)
                x0_25 = UI2GetHandle(zx.q(x23_1), "txt_entry")
                *x28_1 = x0_25.d
                
                if (x0_25.d != 0)
                    *(x28_1 - 0x30) = "txt_entry"
                    *(x28_1 - 0x38) = x23_1
                    *(x28_1 - 0x28) = 0xffffffff
            else
                x0_25 = zx.q(*x28_1)
            
            int32_t x0_27 = UI2NumTextLines(x0_25)
            uint64_t x0_28 = zx.q(x23_1)
            
            if (x24_1 != zx.q(*(gLogData + 0xc08)))
                UI2SetState(x0_28, &data_1832d48, 0xffffffff, 0)
                
                if (x0_27 s> 1 || *(x20_1 + 8) != 0)
                    UI2SetState(zx.q(x23_1), &data_1832dc0, 0xffffffff, 0)
            else
                UI2SetState(x0_28, &data_1832d60, 0xffffffff, 0)
                
                if (x0_27 u>= 2)
                    UI2StateDecl* x1_8
                    
                    if (x0_27 != 2)
                        x1_8 = &data_1832da8
                    else
                        x1_8 = &data_1832d78
                    
                    UI2SetState(zx.q(x23_1), x1_8, 0xffffffff, 0)
            
            result = UI2SetText(zx.q(x23_1), &data_1832d00, x20_1, 0xffffffff)
            int32_t x25_1 = *(x20_1 + 8)
            
            if (x25_1 != 0)
                int32_t x0_32 = GetUndoStyleFlag(gDomClient + 0x81450)
                result = CanUndo()
                
                if ((result.d & 1) != 0 && (x25_1 != 2 || x0_32 != 1))
                    UI2StateDecl* x1_6
                    
                    if (x25_1 != 2)
                        x1_6 = &data_1832d18
                    else
                        x1_6 = &data_1832d30
                    
                    result = UI2SetState(zx.q(x23_1), x1_6, 0xffffffff, 0)
        
        i += 1
        x28_1 += 0x40
        x20_1 += 0x18
    while (i s< sx.q(*(gLogData + 0xc04)))

return result
