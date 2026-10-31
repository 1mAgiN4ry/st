/* Patches */

// ---------------------------- //
// Personally useless patches:  //
// ---------------------------- //

#define ALPHA_PATCH 0 // https://st.suckless.org/patches/alpha/
// https://github.com/juliusHuelsmann/st-focus/
// https://st.suckless.org/patches/alpha_focus_highlight/
#define ALPHA_FOCUS_HIGHLIGHT_PATCH 0
#define ALPHA_GRADIENT_PATCH 0 // https://st.suckless.org/patches/gradient/
#define ANYSIZE_SIMPLE_PATCH 0
#define BACKGROUND_IMAGE_PATCH 0 // https://st.suckless.org/patches/background_image/
#define BACKGROUND_IMAGE_RELOAD_PATCH 0
#define COLUMNS_PATCH 0 // https://github.com/bakkeby/st-flexipatch/issues/34
#define COPYURL_PATCH 0 // https://st.suckless.org/patches/copyurl/
#define COPYURL_HIGHLIGHT_SELECTED_URLS_PATCH 0 // https://st.suckless.org/patches/copyurl/
#define CSI_22_23_PATCH 0 // https://st.suckless.org/patches/csi_22_23/
#define DEFAULT_CURSOR_PATCH 0
#define DISABLE_BOLD_FONTS_PATCH 0 // https://st.suckless.org/patches/disable_bold_italic_fonts/
#define DISABLE_ITALIC_FONTS_PATCH 0 // https://st.suckless.org/patches/disable_bold_italic_fonts/
#define DISABLE_ROMAN_FONTS_PATCH 0 // https://st.suckless.org/patches/disable_bold_italic_fonts/
#define DRAG_AND_DROP_PATCH 0 // https://st.suckless.org/patches/drag-n-drop
#define DYNAMIC_PADDING_PATCH 0 // Note that this patch depends on ANYSIZE_PATCH being enabled to have an effect.
#define EXTERNALPIPE_PATCH 0 // https://st.suckless.org/patches/externalpipe/
// This patch depends on EXTERNALPIPE_PATCH being enabled.
// https://github.com/sos4nt/dynamic-colors
// https://lists.suckless.org/hackers/2004/17218.html
#define EXTERNALPIPEIN_PATCH 0
#define FIXKEYBOARDINPUT_PATCH 0 // https://st.suckless.org/patches/fix_keyboard_input/
#define FULLSCREEN_PATCH 0 // https://st.suckless.org/patches/fullscreen/
#define HIDE_TERMINAL_CURSOR_PATCH 0 // https://www.reddit.com/r/suckless/comments/nvee8h/how_to_hide_cursor_in_st_is_there_a_patch_for_it/
#define INVERT_PATCH 0 // https://st.suckless.org/patches/invert/
#define ISO14755_PATCH 0 // https://st.suckless.org/patches/iso14755/
#define KEYBOARDSELECT_PATCH 0 // https://st.suckless.org/patches/keyboard_select/
#define MONOCHROME_PATCH 0 // https://www.reddit.com/r/suckless/comments/ixbx6z/how_to_use_black_and_white_only_for_st/
// https://tools.suckless.org/farbfeld/
// https://github.com/bakkeby/patches/wiki/netwmicon/
#define NETWMICON_FF_PATCH 0
#define NETWMICON_LEGACY_PATCH 0 // https://st.suckless.org/patches/netwmicon/
#define NEWTERM_PATCH 0 // https://st.suckless.org/patches/newterm/
#define NO_WINDOW_DECORATIONS_PATCH 0
#define OPENCOPIED_PATCH 0 // https://st.suckless.org/patches/open_copied_url/
#define OPEN_SELECTED_TEXT_PATCH 0 // https://st.suckless.org/patches/open_selected_text/
// https://codeberg.org/dnkl/foot/wiki#spawning-new-terminal-instances-in-the-current-working-directory
#define OSC7_PATCH 0 // https://github.com/veltza/st-sx/commit/817865c2c6ed905af8849580e58bdcf399216fbd
#define OSC133_PATCH 0 // https://codeberg.org/dnkl/foot#jumping-between-prompts
#define RIGHTCLICKTOPLUMB_PATCH 0 // https://st.suckless.org/patches/right_click_to_plumb/
#define SELECTION_COLORS_PATCH 0 // https://st.suckless.org/patches/selectioncolors/
#define SELECTIONBG_ALPHA_PATCH 0 // https://st.suckless.org/patches/selectionbg-alpha/
#define SINGLE_DRAWABLE_BUFFER_PATCH 0
#define SIXEL_PATCH 0 // https://gist.github.com/saitoha/70e0fdf22e3e8f63ce937c7f7da71809
#define ST_EMBEDDER_PATCH 0
#define SPOILER_PATCH 0 // https://st.suckless.org/patches/spoiler/
#define SWAPMOUSE_PATCH 0 // https://st.suckless.org/patches/swapmouse/
#define SYNC_PATCH 0 // https://st.suckless.org/patches/sync/
#define THEMED_CURSOR_PATCH 0 // https://st.suckless.org/patches/themed_cursor/
#define UNIVERSCROLL_PATCH 0 // https://st.suckless.org/patches/universcroll/
#define VISUALBELL_1_PATCH 0 // https://st.suckless.org/patches/visualbell/
#define W3M_PATCH 0 // https://st.suckless.org/patches/w3m/
#define WORKINGDIR_PATCH 0 // https://st.suckless.org/patches/workingdir/
#define XRESOURCES_PATCH 0 // https://st.suckless.org/patches/xresources/
#define XRESOURCES_RELOAD_PATCH 0
#define XRESOURCES_XDEFAULTS_PATCH 0
#define WIDE_GLYPH_SPACING_PATCH 0 // https://github.com/googlefonts/Inconsolata/issues/42#issuecomment-737508890

// ---------------------------- //
// Necessary patches:           //
// ---------------------------- //

#define ANYGEOMETRY_PATCH 1 // https://st.suckless.org/patches/anygeometry/
#define ANYSIZE_PATCH 1 // https://st.suckless.org/patches/anysize/
// https://invisible-island.net/xterm/ctlseqs/ctlseqs.html#h4-Functions-using-CSI-_-ordered-by-the-final-character-lparen-s-rparen:CSI-Ps-SP-q.1D81
// https://st.suckless.org/patches/blinking_cursor/
#define BLINKING_CURSOR_PATCH 1
#define BOLD_IS_NOT_BRIGHT_PATCH 1 // https://st.suckless.org/patches/bold-is-not-bright/
#define BOXDRAW_PATCH 1 // https://st.suckless.org/patches/boxdraw/
#define CLIPBOARD_PATCH 1 // https://st.suckless.org/patches/clipboard/
#define DELKEY_PATCH 1 // https://st.suckless.org/patches/delkey/
#define DYNAMIC_CURSOR_COLOR_PATCH 1 // https://st.suckless.org/patches/dynamic-cursor-color/
#define FONT2_PATCH 1 // https://st.suckless.org/patches/font2/
#define HIDECURSOR_PATCH 1 // https://st.suckless.org/patches/hidecursor/
// https://github.com/cog1to/st-ligatures
// https://st.suckless.org/patches/ligatures/
#define LIGATURES_PATCH 1
/*
 * The default location for the .png file is:
 *    - /usr/local/share/pixmaps/st.png
 *
 * https://st.suckless.org/patches/netwmicon/
 */
#define NETWMICON_PATCH 1
#define OPENURLONCLICK_PATCH 1 // https://www.reddit.com/r/suckless/comments/cc83om/st_open_url/
#define REFLOW_PATCH 1
#define RELATIVEBORDER_PATCH 1 // https://st.suckless.org/patches/relativeborder/
#define SCROLLBACK_PATCH 1 // https://st.suckless.org/patches/scrollback/
#define SCROLLBACK_MOUSE_PATCH 1 // https://st.suckless.org/patches/scrollback/
#define SCROLLBACK_MOUSE_ALTSCREEN_PATCH 1 // https://st.suckless.org/patches/scrollback/
#define UNDERCURL_PATCH 1 // https://st.suckless.org/patches/undercurl/
/* Use XftFontMatch in place of FcFontMatch.
 *
 * XftFontMatch calls XftDefaultSubstitute which configures various match properties according
 * to the user's configured Xft defaults (xrdb) as well as according to the current display and
 * screen. Most importantly, the screen DPI is computed [1]. Without this, st uses a "default"
 * DPI of 75 [2].
 *
 * [1]: https://cgit.freedesktop.org/xorg/lib/libXft/tree/src/xftdpy.c?id=libXft-2.3.2#n535
 * [2]: https://cgit.freedesktop.org/fontconfig/tree/src/fcdefault.c?id=2.11.1#n255
 *
 * https://git.suckless.org/st/commit/528241aa3835e2f1f052abeeaf891737712955a0.html
 */
#define USE_XFTFONTMATCH_PATCH 1
#define VERTCENTER_PATCH 1 // https://st.suckless.org/patches/vertcenter/
// https://github.com/Dreomite/st/commit/e3b821dcb3511d60341dec35ee05a4a0abfef7f2
// https://www.reddit.com/r/suckless/comments/jt90ai/update_support_for_proper_glyph_rendering_in_st/
#define WIDE_GLYPHS_PATCH 1
