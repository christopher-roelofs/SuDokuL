#include "include.h"

#ifndef TEXT_OBJECTS_H
#define TEXT_OBJECTS_H

#if defined(WII_U) || defined(VITA) || defined(SWITCH) || defined(ANDROID) || defined(PSP)
#define STRCPY(dest, src) \
    strcpy(dest, src);
#else
#define STRCPY(dest, src) \
    strcpy_s(dest, src);
#endif

#if defined (WII_U) || defined(PSP) || defined(VITA) || defined(SWITCH)
#define CONTROLS_STEP 1.89
#else
#define CONTROLS_STEP 1.6
#endif

struct TextRect {
    Sint16 x;
    Sint16 y;
    Sint16 w;
    Sint16 h;
};

/* Single Characters */
struct TextCharObject {
    SDL_Surface *surface, *outline_surface;
    SDL_Texture *texture, *outline_texture;
    SDL_Rect rect, outline_rect;
    Sint8 outlineOffset_x, outlineOffset_y;
};

/* Full Words/Phrases (can be animated) */
struct TextObject {
    string str;
    TextRect rect;
    Sint16 startPos_x, endPos_x;
    Sint16 startPos_y, endPos_y;
};

/* Fonts */
const SDL_Color color_black = {0, 0, 0};
const SDL_Color color_white = {255, 255, 255};
const SDL_Color color_blue = {0, 0, 192};
const SDL_Color color_gray_240 = {240, 240, 240};
const SDL_Color color_light_blue = {240, 240, 255};
extern TTF_Font *pixelFont;
extern TTF_Font *pixelFont_large;
extern TTF_Font *pixelFont_grid;
extern TTF_Font *pixelFont_grid_mini;

/* Text Objects */
/* General - Numbers */
extern TextCharObject gridNums_black[10];
extern TextCharObject gridNums_blue[10];
extern TextCharObject gridNums_blue_mini[10];
/* General - Everything */
extern TextCharObject textChars[127];
extern TextCharObject textChars_large[91];
extern char tempCharArray[64];
extern Uint8 charCounter;
extern Uint16 charWidthCounter;
/* Specific */
extern TextObject text_Loading;
extern TextObject text_Easy;
extern TextObject text_Normal;
extern TextObject text_Hard;
extern TextObject text_Very_Hard;
extern TextObject text_Time;
extern TextObject text_Empty;
extern TextObject text_Game_Easy;
extern TextObject text_Game_Normal;
extern TextObject text_Game_Hard;
extern TextObject text_Game_VHard;
extern TextObject text_Paused;
extern TextObject text_Quit_to_Menu_1;
extern TextObject text_Quit_to_Menu_2;
extern TextObject text_You_Win;
extern TextObject text_Controls_Menu;
extern TextObject text_Video;
extern TextObject text_Sound;
extern TextObject text_Background;
extern TextObject text_Controller_Input;
extern TextObject text_Touch_Screen_Input;
extern TextObject text_A_Confirm;
extern TextObject text_B_Back;
extern TextObject text_B_Confirm;
extern TextObject text_A_Back;
extern TextObject text_Enabled;
extern TextObject text_Disabled;
extern TextObject text_Video_Warning;
extern TextObject text_Resolution;
extern TextObject text_x;
extern TextObject text_Aspect_Ratio;
extern TextObject text_colon;
extern TextObject text_Integer_Scale;
extern TextObject text_On;
extern TextObject text_Off;
extern TextObject text_Apply;
extern TextObject text_Music;
extern TextObject text_Music_Volume;
extern TextObject text_SFX_Volume;
extern TextObject text_Scroll_Speed;
extern TextObject text_Scroll_Direction;
extern TextObject text_Background_Size;
extern TextObject text_Reset_to_Default;
extern TextObject text_Controls_1;
extern TextObject text_Controls_2a;
extern TextObject text_Controls_2b;
extern TextObject text_Controls_2c;
extern TextObject text_Controls_3a;
extern TextObject text_Controls_3b;
extern TextObject text_Controls_3c;
extern TextObject text_Controls_4a;
extern TextObject text_Controls_4b;
extern TextObject text_Controls_4c;
extern TextObject text_Controls_5a;
extern TextObject text_Controls_5b;
extern TextObject text_Controls_6a;
extern TextObject text_Controls_6b;
extern TextObject text_Controls_7a;
extern TextObject text_Controls_7b;
extern TextObject text_Controls_7c;
extern TextObject text_Controls_P1;
extern TextObject text_Controls_8;
extern TextObject text_Controls_9a;
extern TextObject text_Controls_9b;
extern TextObject text_Controls_10a;
extern TextObject text_Controls_10b;
extern TextObject text_Controls_11a;
extern TextObject text_Controls_11b;
extern TextObject text_Controls_12a;
extern TextObject text_Controls_12b;
extern TextObject text_Controls_12c;
extern TextObject text_Controls_P2;
extern TextObject text_Controls_c_1;
extern TextObject text_Controls_c_2a;
extern TextObject text_Controls_c_3a;
extern TextObject text_Controls_c_4a;
extern TextObject text_Controls_c_5a;
extern TextObject text_Controls_c_6a;
extern TextObject text_Controls_c_P1;
extern TextObject text_Controls_c_8;
extern TextObject text_Controls_c_9a;
extern TextObject text_Controls_c_10a;
extern TextObject text_Controls_c_12a;
extern TextObject text_Controls_c_12b;
extern TextObject text_Controls_c_12c;
extern TextObject text_Controls_c_P2;
extern TextObject text_Credits_1;
extern TextObject text_Credits_2;
extern TextObject text_Credits_3;
extern TextObject text_Credits_P1;
extern TextObject text_Credits_4;
extern TextObject text_Credits_5b;
extern TextObject text_Credits_5a;
extern TextObject text_Credits_6b;
extern TextObject text_Credits_6a;
extern TextObject text_Credits_7b;
extern TextObject text_Credits_7a;
extern TextObject text_Credits_8b;
extern TextObject text_Credits_8a;
extern TextObject text_Credits_9b;
extern TextObject text_Credits_9a;
extern TextObject text_Credits_10b;
extern TextObject text_Credits_10a;
extern TextObject text_Credits_11b;
extern TextObject text_Credits_11a;
extern TextObject text_Credits_12;
extern TextObject text_Credits_P2;
extern TextObject text_Credits_13;
extern TextObject text_Credits_14;
extern TextObject text_Credits_15;
extern TextObject text_Credits_16;
extern TextObject text_Credits_17;
extern TextObject text_Credits_P3;
extern TextObject text_Credits_18;
extern TextObject text_Credits_19;
extern TextObject text_Credits_20;
extern TextObject text_Credits_P4;
extern TextObject text_Credits_21;
extern TextObject text_Credits_22;
extern TextObject text_Credits_23;
extern TextObject text_Credits_P5;
extern TextObject text_Credits_24;
extern TextObject text_Credits_25;
extern TextObject text_Credits_26;
extern TextObject text_Credits_27;
extern TextObject text_Credits_28;
extern TextObject text_Credits_29;
extern TextObject text_Credits_30;
extern TextObject text_Credits_P6;
extern TextObject text_Credits_31;
extern TextObject text_Credits_32;
extern TextObject text_Credits_33;
extern TextObject text_Credits_34;
extern TextObject text_Credits_35;
extern TextObject text_Credits_36;
extern TextObject text_Credits_37;
extern TextObject text_Credits_38;
extern TextObject text_Credits_39;
extern TextObject text_Credits_P7;
extern TextObject text_PressStart;
extern TextObject text_Version_Number;
extern TextObject text_Play;
extern TextObject text_Controls;
extern TextObject text_Options;
extern TextObject text_Credits;
extern TextObject text_Quit;
extern SDL_Rect divider;

/* Font-Related Variables */
extern Uint16 fontSize;
extern Uint16 gridNumSize;
extern Uint16 text_pressStartAmplitude;
extern Uint16 text_standardAmplitude;
extern Uint16 text_menuChoice3;
extern Uint16 text_menuChoice1;
extern Uint16 text_menuChoice2;
extern Uint16 text_menuChoice4;
extern Uint16 text_menuChoice5;
extern Uint16 text_videoWarning_Y;
extern Uint16 text_midScreen_Y;
extern Uint16 text_quitToMenu_Y;
extern Uint16 deepMenuCursorPosition_X;
extern Uint16 videoMenuNumPosition_X;
extern Uint16 backgroundMenuNumPosition_X;


#define FONT_SIZE                         (fontSize)
#define GRID_NUM_SIZE                     (gridNumSize)
#define TEXT_PRESS_START_AMPLITUDE        (text_pressStartAmplitude)
#define TEXT_STANDARD_AMPLITUDE           (text_standardAmplitude)
#define TEXT_PRESS_START_Y                (text_menuChoice3) /* 300 on 480p; top of text, not middle */
#define TEXT_VERSION_NUMBER_Y             (gameHeight - (text_Version_Number.rect.h * 1.5))
#define TEXT_PLAY_Y                       (text_menuChoice1)
#define TEXT_CONTROLS_Y                   (text_menuChoice2)
#define TEXT_OPTIONS_Y                    (text_menuChoice3)
#define TEXT_CREDITS_Y                    (text_menuChoice4)
#define TEXT_QUIT_Y                       (text_menuChoice5)
#define TEXT_EASY_Y                       (text_menuChoice1)
#define TEXT_NORMAL_Y                     (text_menuChoice2)
#define TEXT_HARD_Y                       (text_menuChoice3)
#define TEXT_VERY_HARD_Y                  (text_menuChoice4)
#define TEXT_LOADING_Y                    (text_midScreen_Y)
#define TEXT_PAUSED_Y                     (text_midScreen_Y - FONT_SIZE)
#define TEXT_QUIT_TO_MENU_Y               (text_quitToMenu_Y)
#define TEXT_CONTROLS_MENU_Y              (text_menuChoice1)
#define TEXT_VIDEO_Y                      (text_menuChoice2)
#define TEXT_SOUND_Y                      (text_menuChoice3)
#define TEXT_BACKGROUND_Y                 (text_menuChoice4)
#define TEXT_CONTROLLER_INPUT_Y           (text_menuChoice1)
#define TEXT_TOUCH_SCREEN_INPUT_Y         (text_menuChoice3)
#define TEXT_VIDEO_WARNING_Y              (text_videoWarning_Y)
#define TEXT_RESOLUTION_Y                 (text_menuChoice1)
#define TEXT_ASPECT_RATIO_Y               (text_menuChoice2)
#if !defined(ANDROID)
#define TEXT_INTEGER_SCALE_Y                 (text_menuChoice3)
#else
#define TEXT_INTEGER_SCALE_Y                 (text_menuChoice1)
#endif
#define TEXT_APPLY_Y                      (text_menuChoice4)
#define TEXT_SCORES_Y                     (text_menuChoice5)
#define TEXT_SCROLL_SPEED_Y               (text_menuChoice1)
#define TEXT_SCROLL_DIRECTION_Y           (text_menuChoice2)
#define TEXT_BACKGROUND_SIZE_Y            (text_menuChoice3)
#define TEXT_RESET_TO_DEFAULT_Y           (text_menuChoice4)
#define TEXT_MUSIC_Y                      (text_menuChoice1)
#define TEXT_MUSIC_VOLUME_Y               (text_menuChoice2)
#define TEXT_SFX_VOLUME_Y                 (text_menuChoice3)
#define CONTROLS_MENU_CURSOR_POSITION_X   (gameWidth / 8)
#define VIDEO_MENU_CURSOR_POSITION_X      (deepMenuCursorPosition_X)
#define VIDEO_MENU_NUM_POSITION_X         (videoMenuNumPosition_X)
#define BACKGROUND_MENU_CURSOR_POSITION_X (deepMenuCursorPosition_X)
#define BACKGROUND_MENU_NUM_POSITION_X    (backgroundMenuNumPosition_X)
#define SOUND_MENU_CURSOR_POSITION_X      (deepMenuCursorPosition_X)
#define SOUND_MENU_NUM_POSITION_X         (backgroundMenuNumPosition_X) // shared with background
#define TEXT_A_CONFIRM_Y                  (text_menuChoice1 - CONTROLS_SPACER)
#define TEXT_B_BACK_Y                     (text_menuChoice1 + CONTROLS_SPACER)
#define TEXT_B_CONFIRM_Y                  (TEXT_A_CONFIRM_Y)
#define TEXT_A_BACK_Y                     (TEXT_B_BACK_Y)
constexpr auto BASE_FONT_SIZE =           20; // default font size (480 / 24)
#define TEXT_TIME_Y                       (game_sidebar_small.rect.y + (game_sidebar_small.rect.h / 4))
#define TEXT_EMPTY_Y                      (game_sidebar_small.rect.y + (game_sidebar_small.rect.h / 4))
#define TEXT_GAME_EASY_Y                  (game_sidebar_small.rect.y + (game_sidebar_small.rect.h - FONT_SIZE) / 2)
#define TEXT_GAME_NORMAL_Y                (TEXT_GAME_EASY_Y)
#define TEXT_GAME_HARD_Y                  (TEXT_GAME_EASY_Y)
#define TEXT_GAME_VHARD_Y                 (TEXT_GAME_EASY_Y)
#define TEXT_YOU_WIN_Y                    ((game_grid.rect.y + game_grid.rect.h + gameHeight - FONT_SIZE) / 2)
#define CONTROLS_MENU_ENDPOINT            (text_A_Confirm.rect.x + text_A_Confirm.rect.w)
#define SOUND_MENU_ENDPOINT               (SOUND_MENU_NUM_POSITION_X + (FONT_SIZE * 2))
#define BACKGROUND_MENU_ENDPOINT          (BACKGROUND_MENU_NUM_POSITION_X + (FONT_SIZE * 3))

extern void initStartingTextVariables();
//extern void INIT_TEXT_OBJECT_VALS(textObj);
//extern void CHAR_AT_INDEX(index);
//extern void CHAR_AT_INDEX_LARGE(index);
//extern void ADJUST_CHAR_OUTLINE_OFFSET(arr, c, x, y);
//extern void RENDER_TEXT_CHAR(textObj);
//extern void RENDER_TEXT(textObj);
//extern void RENDER_TEXT_LARGE(textObj);
//extern void SET_TEXT_POS_X(textObj, pos_x, offset);
//extern void SET_TEXT_POS_Y(textObj, pos_y, offset);
//extern void SET_TEXT_CHAR_WITH_OUTLINE(text, font, text_color, outline_color, textObj);
//extern void SET_FONT_OUTLINE(font, textObj);
//extern void SET_TEXT_WITH_OUTLINE(text, textObj, pos_x, pos_y);
//extern void SET_LARGE_TEXT_WITH_OUTLINE(text, textObj, pos_x, pos_y);
//extern void SET_TEXT_WITH_OUTLINE_ANIMATED(text, textObj, pos_x, pos_y);
//extern void SET_TEXT_WITH_OUTLINE_HELPER(text, textObj, pos_x, pos_y);
//extern void SET_LARGE_TEXT_WITH_OUTLINE_HELPER(text, textObj, pos_x, pos_y);
//extern void SET_AND_RENDER_NUM_HELPER(digit, pos_x_left, pos_y, i_offset);
//extern void SET_AND_RENDER_NUM_THREE_DIGIT_CENTERED(num, pos_x_centered, pos_y);
//extern void SET_AND_RENDER_NUM_RESOLUTION(width, height, pos_x_left, pos_y);
//extern void SET_AND_RENDER_NUM_ASPECT_RATIO_4_3(pos_x_left, pos_y);
//extern void SET_AND_RENDER_NUM_ASPECT_RATIO_16_9(pos_x_left, pos_y);
//extern void SET_AND_RENDER_NUM_ASPECT_RATIO_16_10(pos_x_left, pos_y);
//extern void SET_AND_RENDER_NUM_ASPECT_RATIO_21_9(pos_x_left, pos_y);
//extern void SET_AND_RENDER_TIMER(pos_x_left, pos_y);
//extern void RENDER_NUM_EMPTY(pos_x_left, pos_y);
//extern void SET_AND_RENDER_COLON(pos_x_left, pos_y);
//extern void SET_AND_RENDER_NUM_GRID_MAIN_NORMAL(textNumsObj, num, index);
//extern void SET_AND_RENDER_NUM_GRID_MAIN_MINI(textNumsObj, num, index);
//extern void SET_AND_RENDER_NUM_GRID_SUB_NORMAL(textNumsObj, num);
//extern void SET_AND_RENDER_NUM_GRID_SUB_MINI(textNumsObj, num);
//extern void MENU_MOVE_TEXT_RIGHT(textObj, timer);
//extern void MENU_MOVE_TEXT_LEFT(textObj, timer);
//extern void MENU_MOVE_TEXT_UP(textObj, timer);
//extern void MENU_MOVE_TEXT_DOWN(textObj, timer);
//extern void DESTROY_TEXT_OBJECT_TEXTURE(textObj);
extern void renderTestText();
//extern void CONTROLS_SPACER;
extern void setControlsText();
extern void setSelectBtnText();
//extern void RENDER_DIVIDER_BETWEEN_Y(textObj1, textObj2);
extern void renderControlsTextPage1();
extern void renderControlsTextPage2();
extern void renderControlsTextPage3();
extern void renderControlsTextPage4();
extern void setCreditsText();
extern void renderCreditsTextPage1();
extern void renderCreditsTextPage2();
extern void renderCreditsTextPage3();
extern void renderCreditsTextPage4();
extern void renderCreditsTextPage5();
extern void renderCreditsTextPage6();
extern void renderCreditsTextPage7();
extern void controlsSetConfirmBackPos();

#define INIT_TEXT_OBJECT_VALS(textObj) \
    textObj.rect.x = 0;                \
    textObj.rect.y = 0;                \
    textObj.rect.w = 0;                \
    textObj.rect.h = 0;

#define CHAR_AT_INDEX(index) textChars[tempCharArray[index]]

#define CHAR_AT_INDEX_LARGE(index) textChars_large[tempCharArray[index]]

#define ADJUST_CHAR_OUTLINE_OFFSET(arr, c, x, y)                                                    \
    if (x > 0) {                                                                                    \
        arr[c].outlineOffset_x += max((int)(x * GAME_HEIGHT_MULT * arr[c].rect.h / FONT_SIZE), 1);  \
    } else if (x < 0) {                                                                             \
        arr[c].outlineOffset_x += min((int)(x * GAME_HEIGHT_MULT * arr[c].rect.h / FONT_SIZE), -1); \
    }                                                                                               \
    if (y > 0) {                                                                                    \
        arr[c].outlineOffset_y += max((int)(y * GAME_HEIGHT_MULT * arr[c].rect.h / FONT_SIZE), 1);  \
    } else if (y < 0) {                                                                             \
        arr[c].outlineOffset_y += min((int)(y * GAME_HEIGHT_MULT * arr[c].rect.h / FONT_SIZE), -1); \
    }

#define RENDER_TEXT_CHAR(textObj)                                                   \
    SDL_RenderCopy(renderer, textObj.outline_texture, NULL, &textObj.outline_rect); \
    SDL_RenderCopy(renderer, textObj.texture, NULL, &textObj.rect);

#define RENDER_TEXT(textObj)                                                                                                         \
    STRCPY(tempCharArray, textObj.str.c_str());                                                                                      \
    charWidthCounter = 0;                                                                                                            \
    for (charCounter = 0; charCounter < textObj.str.length(); charCounter++) {                                                       \
        SET_TEXT_POS_X(CHAR_AT_INDEX(charCounter), (textObj.rect.x + charWidthCounter), CHAR_AT_INDEX(charCounter).outlineOffset_x); \
        SET_TEXT_POS_Y(CHAR_AT_INDEX(charCounter), textObj.rect.y, CHAR_AT_INDEX(charCounter).outlineOffset_y);                      \
        RENDER_TEXT_CHAR(textChars[tempCharArray[charCounter]]);                                                                     \
        charWidthCounter += CHAR_AT_INDEX(charCounter).rect.w;                                                                       \
    }

#define RENDER_TEXT_LARGE(textObj)                                                                                                               \
    STRCPY(tempCharArray, textObj.str.c_str());                                                                                                  \
    charWidthCounter = 0;                                                                                                                        \
    for (charCounter = 0; charCounter < textObj.str.length(); charCounter++) {                                                                   \
        SET_TEXT_POS_X(CHAR_AT_INDEX_LARGE(charCounter), (textObj.rect.x + charWidthCounter), CHAR_AT_INDEX_LARGE(charCounter).outlineOffset_x); \
        SET_TEXT_POS_Y(CHAR_AT_INDEX_LARGE(charCounter), textObj.rect.y, CHAR_AT_INDEX_LARGE(charCounter).outlineOffset_y);                      \
        RENDER_TEXT_CHAR(textChars_large[tempCharArray[charCounter]]);                                                                           \
        charWidthCounter += CHAR_AT_INDEX_LARGE(charCounter).rect.w;                                                                             \
    }

#define SET_TEXT_POS_X(textObj, pos_x, offset) \
    textObj.rect.x = (pos_x);                  \
    textObj.outline_rect.x = (pos_x) + (offset);

#define SET_TEXT_POS_Y(textObj, pos_y, offset) \
    textObj.rect.y = (pos_y);                  \
    textObj.outline_rect.y = (pos_y) + (offset);

#define SET_TEXT_CHAR_WITH_OUTLINE(text, font, text_color, outline_color, textObj)             \
    textObj.surface = TTF_RenderText_Solid(font, text, text_color);                            \
    textObj.texture = SDL_CreateTextureFromSurface(renderer, textObj.surface);                 \
    TTF_SizeText(font, text, &textObj.rect.w, &textObj.rect.h);                                \
    SET_FONT_OUTLINE(font, textObj);                                                           \
    textObj.outline_surface = TTF_RenderText_Solid(font, text, outline_color);                 \
    textObj.outline_texture = SDL_CreateTextureFromSurface(renderer, textObj.outline_surface); \
    TTF_SizeText(font, text, &textObj.outline_rect.w, &textObj.outline_rect.h);                \
    TTF_SetFontOutline(font, 0);                                                               \
    SDL_FreeSurface(textObj.surface);                                                          \
    SDL_FreeSurface(textObj.outline_surface);

#define SET_FONT_OUTLINE(font, textObj) \
    TTF_SetFontOutline(font, max((textObj.rect.h / 10), int(ceil(GAME_HEIGHT_MULT))));

#define SET_TEXT_WITH_OUTLINE(text, textObj, pos_x, pos_y) \
    INIT_TEXT_OBJECT_VALS(textObj);                        \
    SET_TEXT_WITH_OUTLINE_HELPER(text, textObj, pos_x, pos_y);

#define SET_LARGE_TEXT_WITH_OUTLINE(text, textObj, pos_x, pos_y) \
    INIT_TEXT_OBJECT_VALS(textObj);                              \
    SET_LARGE_TEXT_WITH_OUTLINE_HELPER(text, textObj, pos_x, pos_y);

#define SET_TEXT_WITH_OUTLINE_ANIMATED(text, textObj, pos_x, pos_y) \
    INIT_TEXT_OBJECT_VALS(textObj);                                 \
    SET_TEXT_WITH_OUTLINE_HELPER(text, textObj, pos_x, pos_y);      \
    initMenuOptionPositions(&textObj);

#define SET_TEXT_WITH_OUTLINE_HELPER(text, textObj, pos_x, pos_y)                              \
    textObj.str = text;                                                                        \
    STRCPY(tempCharArray, textObj.str.c_str());                                                \
    for (uint_i = 0; uint_i < textObj.str.length(); uint_i++) {                                \
        textObj.rect.w += textChars[tempCharArray[uint_i]].rect.w;                             \
        textObj.rect.h = max(textObj.rect.h, (Sint16)textChars[tempCharArray[uint_i]].rect.h); \
    }                                                                                          \
    textObj.rect.x = pos_x;                                                                    \
    textObj.rect.y = pos_y;

#define SET_LARGE_TEXT_WITH_OUTLINE_HELPER(text, textObj, pos_x, pos_y)                              \
    textObj.str = text;                                                                              \
    STRCPY(tempCharArray, textObj.str.c_str());                                                      \
    for (uint_i = 0; uint_i < textObj.str.length(); uint_i++) {                                      \
        textObj.rect.w += textChars_large[tempCharArray[uint_i]].rect.w;                             \
        textObj.rect.h = max(textObj.rect.h, (Sint16)textChars_large[tempCharArray[uint_i]].rect.h); \
    }                                                                                                \
    textObj.rect.x = pos_x;                                                                          \
    textObj.rect.y = pos_y;

#define SET_AND_RENDER_NUM_HELPER(digit, pos_x_left, pos_y, i_offset)                                                            \
    SET_TEXT_POS_X(textChars[(digit + 48)], (pos_x_left + ((i + i_offset) * FONT_SIZE)), textChars[digit + 48].outlineOffset_x); \
    i++;                                                                                                                         \
    SET_TEXT_POS_Y(textChars[(digit + 48)], pos_y, textChars[digit + 48].outlineOffset_y);                                       \
    RENDER_TEXT_CHAR(textChars[(digit + 48)]);

#define SET_AND_RENDER_NUM_THREE_DIGIT_CENTERED(num, pos_x_centered, pos_y) \
    i = 0;                                                                  \
    if (num > 99) {                                                         \
        j = num / 100;                                                      \
        SET_AND_RENDER_NUM_HELPER(j, pos_x_centered, pos_y, 0);             \
        j = (num / 10) % 10;                                                \
        SET_AND_RENDER_NUM_HELPER(j, pos_x_centered, pos_y, 0);             \
        j = num % 10;                                                       \
        SET_AND_RENDER_NUM_HELPER(j, pos_x_centered, pos_y, 0);             \
    } else if (num > 9) {                                                   \
        j = num / 10;                                                       \
        SET_AND_RENDER_NUM_HELPER(j, pos_x_centered, pos_y, 0.5);           \
        j = num % 10;                                                       \
        SET_AND_RENDER_NUM_HELPER(j, pos_x_centered, pos_y, 0.5);           \
    } else {                                                                \
        SET_AND_RENDER_NUM_HELPER(num, pos_x_centered, pos_y, 1);           \
    }

#define SET_AND_RENDER_NUM_RESOLUTION(width, height, pos_x_left, pos_y)   \
    i = 0;                                                                \
    if (width > 999) {                                                    \
        SET_AND_RENDER_NUM_HELPER(width / 1000, pos_x_left, pos_y, 0);    \
    }                                                                     \
    SET_AND_RENDER_NUM_HELPER((width / 100) % 10, pos_x_left, pos_y, 0);  \
    SET_AND_RENDER_NUM_HELPER((width / 10) % 10, pos_x_left, pos_y, 0);   \
    SET_AND_RENDER_NUM_HELPER(width % 10, pos_x_left, pos_y, 0);          \
    text_x.rect.x = pos_x_left + (i * FONT_SIZE);                         \
    i++;                                                                  \
    text_x.rect.y = pos_y;                                                \
    RENDER_TEXT(text_x);                                                  \
    if (height > 999) {                                                   \
        SET_AND_RENDER_NUM_HELPER(height / 1000, pos_x_left, pos_y, 0);   \
    }                                                                     \
    SET_AND_RENDER_NUM_HELPER((height / 100) % 10, pos_x_left, pos_y, 0); \
    SET_AND_RENDER_NUM_HELPER((height / 10) % 10, pos_x_left, pos_y, 0);  \
    SET_AND_RENDER_NUM_HELPER(height % 10, pos_x_left, pos_y, 0);

#define SET_AND_RENDER_NUM_ASPECT_RATIO_4_3(pos_x_left, pos_y) \
    i = 0;                                                     \
    SET_AND_RENDER_NUM_HELPER(4, pos_x_left, pos_y, 0);        \
    SET_AND_RENDER_COLON(pos_x_left, pos_y);                   \
    SET_AND_RENDER_NUM_HELPER(3, pos_x_left, pos_y, 0);

#define SET_AND_RENDER_NUM_ASPECT_RATIO_16_9(pos_x_left, pos_y) \
    i = 0;                                                      \
    SET_AND_RENDER_NUM_HELPER(1, pos_x_left, pos_y, 0);         \
    SET_AND_RENDER_NUM_HELPER(6, pos_x_left, pos_y, 0);         \
    SET_AND_RENDER_COLON(pos_x_left, pos_y);                    \
    SET_AND_RENDER_NUM_HELPER(9, pos_x_left, pos_y, 0);

#define SET_AND_RENDER_NUM_ASPECT_RATIO_16_10(pos_x_left, pos_y) \
    i = 0;                                                       \
    SET_AND_RENDER_NUM_HELPER(1, pos_x_left, pos_y, 0);          \
    SET_AND_RENDER_NUM_HELPER(6, pos_x_left, pos_y, 0);          \
    SET_AND_RENDER_COLON(pos_x_left, pos_y);                     \
    SET_AND_RENDER_NUM_HELPER(1, pos_x_left, pos_y, 0);          \
    SET_AND_RENDER_NUM_HELPER(0, pos_x_left, pos_y, 0);

#define SET_AND_RENDER_NUM_ASPECT_RATIO_21_9(pos_x_left, pos_y) \
    i = 0;                                                      \
    SET_AND_RENDER_NUM_HELPER(2, pos_x_left, pos_y, 0);         \
    SET_AND_RENDER_NUM_HELPER(1, pos_x_left, pos_y, 0);         \
    SET_AND_RENDER_COLON(pos_x_left, pos_y);                    \
    SET_AND_RENDER_NUM_HELPER(9, pos_x_left, pos_y, 0);

#define SET_AND_RENDER_TIMER(pos_x_left, pos_y)         \
    i = 0;                                              \
    j = (int(timer_game.now) / 600);                    \
    SET_AND_RENDER_NUM_HELPER(j, pos_x_left, pos_y, 0); \
    j = ((int(timer_game.now) / 60) % 10);              \
    SET_AND_RENDER_NUM_HELPER(j, pos_x_left, pos_y, 0); \
    SET_AND_RENDER_COLON(pos_x_left, pos_y);            \
    j = ((int(timer_game.now) % 60) / 10);              \
    SET_AND_RENDER_NUM_HELPER(j, pos_x_left, pos_y, 0); \
    j = (int(timer_game.now) % 10);                     \
    SET_AND_RENDER_NUM_HELPER(j, pos_x_left, pos_y, 0);

#define RENDER_NUM_EMPTY(pos_x_left, pos_y)             \
    i = 0;                                              \
    j = int(numEmpty) / 10;                             \
    SET_AND_RENDER_NUM_HELPER(j, pos_x_left, pos_y, 0); \
    j = int(numEmpty) % 10;                             \
    SET_AND_RENDER_NUM_HELPER(j, pos_x_left, pos_y, 0);

#define SET_AND_RENDER_COLON(pos_x_left, pos_y)       \
    text_colon.rect.x = pos_x_left + (i * FONT_SIZE); \
    i++;                                              \
    text_colon.rect.y = pos_y;                        \
    RENDER_TEXT(text_colon);

#define SET_AND_RENDER_NUM_GRID_MAIN_NORMAL(textNumsObj, num, index)                                                                                                              \
    k = index / 9;                                                                                                                                                                \
    SET_TEXT_POS_X(textNumsObj[num], GRID_X_AT_COL(index % 9) + ((GRID_SIZE_A3 - textNumsObj[num].outline_rect.w) / 2) + numOffset_large_x[k], textNumsObj[num].outlineOffset_x); \
    SET_TEXT_POS_Y(textNumsObj[num], GRID_Y_AT_ROW(k) + ((GRID_SIZE_A3 - textNumsObj[num].outline_rect.h) / 2) + numOffset_large_y[k], textNumsObj[num].outlineOffset_y);         \
    RENDER_TEXT_CHAR(textNumsObj[num]);

#define SET_AND_RENDER_NUM_GRID_MAIN_MINI(textNumsObj, num, index)                                                                                             \
    k = index / 9;                                                                                                                                             \
    SET_TEXT_POS_X(textNumsObj[num], GRID_X_AT_COL(index % 9) + (((num - 1) % 3) * GRID_SIZE_A) + 1 + numOffset_small_x[k], textNumsObj[num].outlineOffset_x); \
    SET_TEXT_POS_Y(textNumsObj[num], GRID_Y_AT_ROW(k) + (((num - 1) / 3) * GRID_SIZE_A) + numOffset_small_y[k], textNumsObj[num].outlineOffset_y);             \
    RENDER_TEXT_CHAR(textNumsObj[num]);

#define SET_AND_RENDER_NUM_GRID_SUB_NORMAL(textNumsObj, num)                                                                                                                                                                                                 \
    k = (num - 1) / 3;                                                                                                                                                                                                                                       \
    SET_TEXT_POS_X(textNumsObj[num], currMiniGrid->rect.x + (GRID_SIZE_D * 3) + (((num - 1) % 3) + 1) * ((GRID_SIZE_A3) + (GRID_SIZE_B)) + ((GRID_SIZE_A3 - textNumsObj[num].outline_rect.w) / 2) + numOffset_large_x[k], textNumsObj[num].outlineOffset_x); \
    SET_TEXT_POS_Y(textNumsObj[num], currMiniGrid->rect.y + (GRID_SIZE_D * 3) + k * ((GRID_SIZE_A3) + (GRID_SIZE_B)) + ((GRID_SIZE_A3 - textNumsObj[num].outline_rect.h) / 2) + numOffset_large_y[k], textNumsObj[num].outlineOffset_y);                     \
    RENDER_TEXT_CHAR(textNumsObj[num]);

#define SET_AND_RENDER_NUM_GRID_SUB_MINI(textNumsObj, num)                                                                                                                                 \
    SET_TEXT_POS_X(textNumsObj[num], currMiniGrid->rect.x + (GRID_SIZE_D * 3) + (((num - 1) % 3) + 1) * ((GRID_SIZE_A3) + (GRID_SIZE_B)) + GRID_SIZE_A, textNumsObj[num].outlineOffset_x); \
    SET_TEXT_POS_Y(textNumsObj[num], currMiniGrid->rect.y + (GRID_SIZE_D * 3) + ((num - 1) / 3) * ((GRID_SIZE_A3) + (GRID_SIZE_B)) + GRID_SIZE_A, textNumsObj[num].outlineOffset_y);       \
    RENDER_TEXT_CHAR(textNumsObj[num]);

#define MENU_MOVE_TEXT_RIGHT(textObj, timer) \
    textObj.rect.x = (Uint16)(textObj.endPos_x - MOVE_FAST_THEN_DECELERATE(textObj.endPos_x - textObj.startPos_x, 1, timer));

#define MENU_MOVE_TEXT_LEFT(textObj, timer) \
    textObj.rect.x = (Uint16)(textObj.startPos_x + MOVE_FAST_THEN_DECELERATE(textObj.endPos_x - textObj.startPos_x, 1, timer));

#define MENU_MOVE_TEXT_UP(textObj, timer) \
    textObj.rect.y = (Uint16)(textObj.endPos_y + MOVE_FAST_THEN_DECELERATE(textObj.startPos_y - textObj.endPos_y, 1, timer));

#define MENU_MOVE_TEXT_DOWN(textObj, timer) \
    textObj.rect.y = (Uint16)(textObj.startPos_y - MOVE_FAST_THEN_DECELERATE(textObj.startPos_y - textObj.endPos_y, 1, timer));

#define DESTROY_TEXT_OBJECT_TEXTURE(textObj) \
    SDL_DestroyTexture(textObj.texture);     \
    SDL_DestroyTexture(textObj.outline_texture);

#define CONTROLS_SPACER (FONT_SIZE * 0.75)

#if defined(WII_U) || defined(VITA) || defined(SWITCH) || defined(ANDROID) || defined(PSP)
#define RENDER_DIVIDER_BETWEEN_Y(textObj1, textObj2)
#else
#define RENDER_DIVIDER_BETWEEN_Y(textObj1, textObj2)                             \
    divider.y = (textObj1.rect.y + textObj2.rect.y + FONT_SIZE - divider.h) / 2; \
    SDL_RenderFillRect(renderer, &divider);
#endif

constexpr auto CREDITS_STEP = 1.6;

#if defined(WII_U) || defined(SWITCH) || defined(ANDROID)
#define CHEAT_TEXT "press X or Y 8 times"
#elif defined(VITA) || defined(PSP)
#define CHEAT_TEXT "press Square or Triangle 8 times"
#else
#define CHEAT_TEXT "press the Period key 8 times"
#endif

#endif