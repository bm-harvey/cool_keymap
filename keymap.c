/* 
 * Overview of the layout
 * \n just means enter
 * 
 * layer takes you to the numbers and nav layer (2)
 * shift isn't actually a shift but goes to a layer that sends the
    shifted version of the base layer
 * this is done so that it is actually a layer key...
 * when "shift" and "layer" are held, a symbols and modified nav layer is
    available (think of it as a layer shift, not a key shift)
 * q and ; are on the num layer because tab, backspace, and enter are
    more important 

 * [BASE_LAYER]                                                           |  [SYMBOL_LAYER]                                                         
 * .-----------------------------.       .-----------------------------.  |  .-----------------------------.       .-----------------------------.  
 * | tab |  w  |  e  |  r  |  t  |       |  y  |  u  |  i  |  o  | bsp |  |  |  Q  |  %  |  ^  |  &  | esc |       | del |  ~  | pgup|  "  | bsp |  
 * |-----------------------------|       |-----------------------------|  |  |-----------------------------|       |-----------------------------|  
 * |  a  |  s  |  d  |  f  |  g  |       |  h  |  j  |  k  |  l  |  p  |  |  |  /  |  *  |  -  |  +  |  =  |       |  |  | home| pgdn| end |  :  |  
 * |-----------------------------|       |-----------------------------|  |  |-----------------------------|       |-----------------------------|  
 * |z ctl|x alt|c win|  v  |  b  |       |  n  |  m  |, win|. alt|\n sh|  |  |  !  |  @  |  #  |  $  |  _  |       |  [  |  ]  |  {  |  }  |  ?  |  
 * '-----------------------------'       '-----------------------------'  |  '-----------------------------'       '-----------------------------'  
 *             .─────────.                       .─────────.              |              .─────────.                       .─────────.              
 *             |  layer  |─────────.   .─────────| *shift* |              |              |~~layer~~|─────────.   .─────────|~~shift~~|              
 *             '─────────|  space  |   |   ctrl  |─────────'              |              '─────────|  space  |   |   ctrl  |─────────'              
 *                       '─────────'   '─────────'                        |                        '─────────'   '─────────'                        
 *                                                                        |                                                                         
 * [SHIFTED_LAYER]                                                        | [MACRO_LAYER]                                                           
 * TAB means shift+tab and ENT meand shift+enter                          |                                                                         
 * .-----------------------------.       .-----------------------------.  |  .-----------------------------.       .-----------------------------.  
 * | TAB |  W  |  E  |  R  |  T  |       |  Y  |  U  |  I  |  O  | bsp |  |  |     | game|     |     |     |       | volu|zmout| scup| zmin|     |  
 * |-----------------------------|       |-----------------------------|  |  |-----------------------------|       |-----------------------------|  
 * |  A  |  S  |  D  |  F  |  G  |       |  H  |  J  |  K  |  L  |  P  |  |  |     |     |  -> |     |     |       | mute|sclft| scdn|scrht|     |  
 * |-----------------------------|       |-----------------------------|  |  |-----------------------------|       |-----------------------------|  
 * |  Z  |  X  |  C  |  V  |  B  |       |  N  |  M  |  <  |  >  | ENT |  |  |     |     |     |     |     |       | vold| prev|  pse| next|     |  
 * '-----------------------------'       '-----------------------------'  |  '-----------------------------'       '-----------------------------'  
 *             .─────────.                       .─────────.              |              .─────────.                       .─────────.              
 *             |  layer  |─────────.   .─────────|~~shift~~|              |              |  escape |─────────.   .─────────|   base  |              
 *             '─────────|  space  |   |   ctrl  |─────────'              |              '─────────|  space  |   |         |─────────'              
 *                       '─────────'   '─────────'                        |                        '─────────'   '─────────'                        
 *                                                                        |                                                                         
 * [NUM_LAYER]                                                            |  [GAME_LAYER]                                                           
 * holding q opens a macro layer                                          |                                                                         
 * holding ; opens a fxn layer                                            |                                                                         
 * .-----------------------------.       .-----------------------------.  |  .-----------------------------.       .-----------------------------.  
 * |q mac| sft | ctl | alt | win |       | del |  `  |  up |  '  | bsp |  |  | tab |  q  |  w  |  e  |  r  |       | volu|zmout| scup| zmin|     |  
 * |-----------------------------|       |-----------------------------|  |  |-----------------------------|       |-----------------------------|  
 * |  1  |  2  |  3  |  4  |  5  |       |  \  | lft |  dn | rht |; fxn|  |  | sft |  a  |  s  |  d  |  f  |       | mute|sclft| scdn|scrht|     |  
 * |-----------------------------|       |-----------------------------|  |  |-----------------------------|       |-----------------------------|  
 * |  6  |  7  |  8  |  9  |  0  |       |  _  |  /  |  (  |  )  |\n sh|  |  | ctl |  z  |  x  |  c  |  v  |       | vold| prev|pause| next|  ~  |  
 * '-----------------------------'       '-----------------------------'  |  '-----------------------------'       '-----------------------------'  
 *             .─────────.                       .─────────.              |              .─────────.                       .─────────.              
 *             |~~layer~~|─────────.   .─────────| *shift* |              |              |  escape |─────────.   .─────────|   base  |              
 *             '─────────|  space  |   |   ctrl  |─────────'              |              '─────────|  space  |   |         |─────────'              
 *                       '─────────'   '─────────'                        |                        '─────────'   '─────────'                        
                                                                          |                                                                         
 * [FXN_LAYER]                                                            |
 * .-----------------------------.       .-----------------------------.  |
 * |     |     |     | F11 | F12 |       |     |     |     |     |     |  |
 * |-----------------------------|       |-----------------------------|  |
 * |  F1 |  F2 |  F3 |  F4 |  F5 |       |     |ctl [| alt |ctl ]|     |  |
 * |-----------------------------|       |-----------------------------|  |
 * |  F6 |  F7 |  F8 |  F9 |  F0 |       |     |     |     |     |     |  |
 * '-----------------------------'       '-----------------------------'  |
 *             .─────────.                       .─────────.              |
 *             |~~layer~~|─────────.   .─────────| *shift* |              |
 *             '─────────|  space  |   |   ctrl  |─────────'              |
 *                       '─────────'   '─────────'                        |
                                                                          |
 */

#include QMK_KEYBOARD_H


char * layout_string = "test\n";

// tap dance states
typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_HELD,
    TD_TAPPED
} td_state_t;

// used for tapdance
typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;


// Tap dance keycodes ... use with TD()
enum {
    Q_MACRO,
    SCLN_FXN
};
enum custom_keys {
  ARROW = SAFE_RANGE,
};

// For the q tap dance. Put it here so it can be used in any keymap
td_state_t get_q_macro_state(tap_dance_state_t *state);
void q_finished(tap_dance_state_t * state, void *user_data);
void q_reset(tap_dance_state_t * state, void *user_data);


td_state_t get_semicolon_fxn_state(tap_dance_state_t *state);
void semicolon_finished(tap_dance_state_t * state, void *user_data);
void semicolon_reset(tap_dance_state_t * state, void *user_data);

enum layer_names {
  BASE_LAYER,
  SHIFTED_LAYER,
  NUM_LAYER,
  SYMBOL_LAYER,
  MACRO_LAYER,
  GAME_LAYER,
  FXN_LAYER,
};

// #define COLEMACKDH
#define QWERTY

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#ifdef QWERTY
  [BASE_LAYER] = LAYOUT(
    // -------------------------------------------------------------+-----------------------------------------------------------------------
    KC_TAB         , KC_W         , KC_E         , KC_R , KC_T , /* | */ KC_Y  , KC_U , KC_I            , KC_O           , KC_BSPC         ,
    KC_A           , KC_S         , KC_D         , KC_F , KC_G , /* | */ KC_H  , KC_J , KC_K            , KC_L           , KC_P            ,
    LCTL_T(KC_Z)   , LALT_T(KC_X) , LGUI_T(KC_C) , KC_V , KC_B , /* | */ KC_N  , KC_M , LGUI_T(KC_COMM) , LALT_T(KC_DOT) , LSFT_T(KC_ENT)  ,
    // -------------------------------------------------------------+-----------------------------------------------------------------------
                                   QK_TRI_LAYER_LOWER , KC_SPC , /* | */ KC_LCTL , QK_TRI_LAYER_UPPER
    // -------------------------------------------------------------+------------------------------------------------------------------------
  ),
  [SHIFTED_LAYER] = LAYOUT(
    // -------------------------------------------------------------------+---------------------------------------------------------------------------
    LSFT(KC_TAB) , LSFT(KC_W) , LSFT(KC_E) , LSFT(KC_R) , LSFT(KC_T) , /* | */ LSFT(KC_Y) , LSFT(KC_U) , LSFT(KC_I)    , LSFT(KC_O)   , KC_BSPC      ,
    LSFT(KC_A)   , LSFT(KC_S) , LSFT(KC_D) , LSFT(KC_F) , LSFT(KC_G) , /* | */ LSFT(KC_H) , LSFT(KC_J) , LSFT(KC_K)    , LSFT(KC_L)   , LSFT(KC_P)   ,
    LSFT(KC_Z)   , LSFT(KC_X) , LSFT(KC_C) , LSFT(KC_V) , LSFT(KC_B) , /* | */ LSFT(KC_N) , LSFT(KC_M) , LSFT(KC_COMM) , LSFT(KC_DOT) , LSFT(KC_ENT) ,
    // -------------------------------------------------------------------+---------------------------------------------------------------------------
                                         QK_TRI_LAYER_LOWER , KC_SPC , /* | */ KC_LCTL , QK_TRI_LAYER_UPPER
    // -------------------------------------------------------------------+---------------------------------------------------------------------------
  ),
#elif defined COLEMACKDH
  [BASE_LAYER] = LAYOUT(
    // ------------------------------------------------------------+------------------------------------------------------------------------
    KC_TAB        , KC_W         , KC_F         , KC_P , KC_B , /* | */ KC_J      , KC_L      , KC_U            , KC_Y           , KC_BSPC ,
    KC_A          , KC_R         , KC_S         , KC_T , KC_G , /* | */ KC_M      , KC_N      , KC_E            , KC_I           , KC_O    ,
    LCTL_T(KC_Z)  , LALT_T(KC_X) , LGUI_T(KC_C) , KC_D , KC_V , /* | */ KC_K      , KC_H      , LGUI_T(KC_COMM) , LALT_T(KC_DOT) , KC_ENT  ,
    // ------------------------------------------------------------+------------------------------------------------------------------------
                                  QK_TRI_LAYER_LOWER , KC_SPC , /* | */ KC_LCTL , QK_TRI_LAYER_UPPER
    // ------------------------------------------------------------+------------------------------------------------------------------------
  ),
  [SHIFTED_LAYER] = LAYOUT(
    // -------------------------------------------------------------------+---------------------------------------------------------------------------
    LSFT(KC_TAB) , LSFT(KC_W) , LSFT(KC_F) , LSFT(KC_P) , LSFT(KC_B) , /* | */ LSFT(KC_J) , LSFT(KC_L) , LSFT(KC_U)    , LSFT(KC_Y)   , KC_BSPC      ,
    LSFT(KC_A)   , LSFT(KC_R) , LSFT(KC_S) , LSFT(KC_T) , LSFT(KC_G) , /* | */ LSFT(KC_M) , LSFT(KC_N) , LSFT(KC_E)    , LSFT(KC_I)   , LSFT(KC_O)   ,
    LSFT(KC_Z)   , LSFT(KC_X) , LSFT(KC_C) , LSFT(KC_D) , LSFT(KC_V) , /* | */ LSFT(KC_K) , LSFT(KC_H) , LSFT(KC_COMM) , LSFT(KC_DOT) , LSFT(KC_ENT) ,
    // -------------------------------------------------------------------+---------------------------------------------------------------------------
                                         QK_TRI_LAYER_LOWER , KC_SPC , /* | */ KC_LCTL , QK_TRI_LAYER_UPPER
    // -------------------------------------------------------------------+---------------------------------------------------------------------------
  ),
#endif
  [NUM_LAYER] = LAYOUT(
    // -------------------------------------------------------+----------------------------------------------------------
     TD(Q_MACRO) , KC_LSFT , KC_LCTL , KC_LALT , KC_LGUI , /* | */ KC_DEL        , KC_GRV  , KC_UP      , KC_QUOT    , KC_BSPC        ,
     KC_1        , KC_2    , KC_3    , KC_4    , KC_5    , /* | */ KC_BSLS       , KC_LEFT , KC_DOWN    , KC_RIGHT   , TD(SCLN_FXN) ,
     KC_6        , KC_7    , KC_8    , KC_9    , KC_0    , /* | */ LSFT(KC_MINS) , KC_SLSH , LSFT(KC_9) , LSFT(KC_0) , LSFT_T(KC_ENT) ,
    // -------------------------------------------------------+----------------------------------------------------------
                              QK_TRI_LAYER_LOWER, KC_SPC , /* | */ KC_LCTL , QK_TRI_LAYER_UPPER
    // -------------------------------------------------------+----------------------------------------------------------
  ),
  [SYMBOL_LAYER] = LAYOUT(
    // -------------------------------------------------------------------------+----------------------------------------------------------------------------------
     LSFT(KC_Q) , LSFT(KC_5) , LSFT(KC_6)   , LSFT(KC_7)   , KC_ESC        , /* | */ KC_DEL        , LSFT(KC_GRV) , KC_PGUP       , LSFT(KC_QUOT) , KC_BSPC       ,
     KC_SLSH    , LSFT(KC_8) , KC_MINS      , LSFT(KC_EQL) , KC_EQL        , /* | */ LSFT(KC_BSLS) , KC_HOME      , KC_PGDN       , KC_END        , LSFT(KC_SCLN) ,
     LSFT(KC_1) , LSFT(KC_2) , LSFT(KC_3)   , LSFT(KC_4)   , LSFT(KC_MINS) , /* | */ KC_LBRC       , KC_RBRC      , LSFT(KC_LBRC) , LSFT(KC_RBRC) , LSFT(KC_SLSH) ,
    // -------------------------------------------------------------------------+----------------------------------------------------------------------------------
                                               QK_TRI_LAYER_LOWER , KC_SPC , /* | */ KC_LCTL , QK_TRI_LAYER_UPPER
    // -------------------------------------------------------------------------+----------------------------------------------------------------------------------
  ),
  [MACRO_LAYER] = LAYOUT(
    // -------------------------------------------------+-------------------------------------------------------------
    KC_NO , TO(GAME_LAYER) , KC_NO , KC_NO , KC_NO , /* | */ KC_VOLU , LCTL(KC_EQL) , KC_WH_U , LCTL(KC_MINS) , KC_NO,
    KC_NO , KC_NO          , ARROW , KC_NO , KC_NO , /* | */ KC_MUTE , KC_WH_L      , KC_WH_D , KC_WH_R       , KC_NO,
    KC_NO , KC_NO          , KC_NO , KC_NO , KC_NO , /* | */ KC_VOLD , KC_MPRV      , KC_MPLY , KC_MNXT       , KC_NO,
    // -------------------------------------------------+-------------------------------------------------------------
                                   KC_ESC , KC_SPC , /* | */ KC_NO , TO(BASE_LAYER)
    // -------------------------------------------------+-------------------------------------------------------------
  ), 
  [GAME_LAYER] = LAYOUT(
    // --------------------------------------+--------------------------------------------------------------
    KC_TAB  , KC_Q , KC_W , KC_E , KC_R , /* | */ KC_VOLU , LCTL(KC_EQL) , KC_WH_U , LCTL(KC_MINS) , KC_NO ,
    KC_LSFT , KC_A , KC_S , KC_D , KC_F , /* | */ KC_MUTE , KC_WH_L      , KC_WH_D , KC_WH_R       , KC_NO ,
    KC_LCTL , KC_Z , KC_X , KC_C , KC_V , /* | */ KC_VOLD , KC_MPRV      , KC_MPLY , KC_MNXT       , KC_NO ,
    // --------------------------------------+--------------------------------------------------------------
                        KC_ESC , KC_SPC , /* | */ KC_NO , TO(BASE_LAYER)
    // --------------------------------------+--------------------------------------------------------------
  ),
  [FXN_LAYER] = LAYOUT(
    // ------------------------------------------+--------------------------------------------------------------
    KC_NO , KC_NO , KC_NO , KC_F11 , KC_F12 , /* | */ KC_NO , KC_NO         , KC_NO   , KC_NO         , KC_NO ,
    KC_F1 , KC_F2 , KC_F3 , KC_F4  , KC_F5  , /* | */ KC_NO , LCTL(KC_LBRC) , KC_LALT , LCTL(KC_RBRC) , KC_NO ,
    KC_F6 , KC_F7 , KC_F8 , KC_F9  , KC_F10 , /* | */ KC_NO , KC_NO         , KC_NO   , KC_NO         , KC_NO ,
    // ------------------------------------------+--------------------------------------------------------------
                              KC_NO , KC_NO , /* | */ KC_NO , TO(BASE_LAYER)
    // ------------------------------------------+--------------------------------------------------------------
  ),
};

// 
// Create an instance of 'td_tap_t' for the 'q' tap dance.
static td_tap_t tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};

td_state_t get_q_macro_state(tap_dance_state_t *state) {
    if (state->count) {
        // or-ing this condition with `state->interuptted` 
        // makes it so that the tap behaviour is preffered for rolls 
        if (!state->pressed) return TD_TAPPED; // prefer hold behavoir on interrupt
        else return TD_HELD;
    } else return TD_UNKNOWN;
}

void q_finished(tap_dance_state_t *state, void* user_data) {
    tap_state.state = get_q_macro_state(state);
    switch (tap_state.state) {
        case TD_TAPPED: 
          for (int i = 0; i < state->count; ++i){
            register_code(KC_Q); 
            unregister_code(KC_Q); 
          } break;
        case TD_HELD: layer_on(MACRO_LAYER); break;
        default: break;
    }
}

void q_reset(tap_dance_state_t * state, void* user_data) {
    switch (tap_state.state) {
        case TD_TAPPED: unregister_code(KC_Q); break;
        case TD_HELD: layer_off(MACRO_LAYER); break;
        default: break;
    }
    tap_state.state = TD_NONE;
}
td_state_t get_semicolon_fxn_state(tap_dance_state_t *state) {
    if (state->count) {
        // or-ing this condition with `state->interuptted` 
        // makes it so that the tap behaviour is preffered for rolls 
        if (!state->pressed) return TD_TAPPED; // prefer hold behavoir on interrupt
        else return TD_HELD;
    } else return TD_UNKNOWN;
}

void semicolon_finished(tap_dance_state_t *state, void* user_data) {
    tap_state.state = get_semicolon_fxn_state(state);
    switch (tap_state.state) {
        case TD_TAPPED: 
          for (int i = 0; i < state->count; ++i){
            register_code(KC_SCLN); 
            unregister_code(KC_SCLN); 
          } break;
        case TD_HELD: layer_on(FXN_LAYER); break;
        default: break;
    }
}

void semicolon_reset(tap_dance_state_t * state, void* user_data) {
    switch (tap_state.state) {
        case TD_TAPPED: unregister_code(KC_SCLN); break;
        case TD_HELD: layer_off(FXN_LAYER); break;
        default: break;
    }
    tap_state.state = TD_NONE;
}

tap_dance_action_t tap_dance_actions[] = {
    [Q_MACRO] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, q_finished, q_reset),
    [SCLN_FXN] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, semicolon_finished, semicolon_reset)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      case ARROW:
        if (record->event.pressed){
          tap_code16(KC_MINS);
          register_code(KC_LSFT);
          tap_code16(KC_DOT);
          unregister_code(KC_LSFT);
          return false;
        }
    }
    return 1;
}