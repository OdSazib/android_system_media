/*
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * !! Do not include this file directly !!
 *
 * Include camera_metadata.h instead.
 */

/**
 * ! Do not edit this file directly !
 *
 * Generated automatically from camera_metadata_tags.mako
 */

/** TODO: Nearly every enum in this file needs a description */

/**
 * Top level hierarchy definitions for camera metadata. *_INFO sections are for
 * the static metadata that can be retrived without opening the camera device.
 * New sections must be added right before ANDROID_SECTION_COUNT to maintain
 * existing enumerations.
 */
typedef enum camera_metadata_section {
    ANDROID_COLOR_CORRECTION,
    ANDROID_CONTROL,
    ANDROID_DEMOSAIC,
    ANDROID_EDGE,
    ANDROID_FLASH,
    ANDROID_FLASH_INFO,
    ANDROID_GEOMETRIC,
    ANDROID_HOT_PIXEL,
    ANDROID_HOT_PIXEL_INFO,
    ANDROID_JPEG,
    ANDROID_LENS,
    ANDROID_LENS_INFO,
    ANDROID_NOISE_REDUCTION,
    ANDROID_QUIRKS,
    ANDROID_REQUEST,
    ANDROID_SCALER,
    ANDROID_SENSOR,
    ANDROID_SENSOR_INFO,
    ANDROID_SHADING,
    ANDROID_STATISTICS,
    ANDROID_STATISTICS_INFO,
    ANDROID_TONEMAP,
    ANDROID_LED,
    ANDROID_INFO,
    ANDROID_BLACK_LEVEL,
    ANDROID_SYNC,
    ANDROID_SECTION_COUNT,

    VENDOR_SECTION = 0x8000
} camera_metadata_section_t;

/**
 * Hierarchy positions in enum space. All vendor extension tags must be
 * defined with tag >= VENDOR_SECTION_START
 */
typedef enum camera_metadata_section_start {
    ANDROID_COLOR_CORRECTION_START = ANDROID_COLOR_CORRECTION  << 16,
    ANDROID_CONTROL_START          = ANDROID_CONTROL           << 16,
    ANDROID_DEMOSAIC_START         = ANDROID_DEMOSAIC          << 16,
    ANDROID_EDGE_START             = ANDROID_EDGE              << 16,
    ANDROID_FLASH_START            = ANDROID_FLASH             << 16,
    ANDROID_FLASH_INFO_START       = ANDROID_FLASH_INFO        << 16,
    ANDROID_GEOMETRIC_START        = ANDROID_GEOMETRIC         << 16,
    ANDROID_HOT_PIXEL_START        = ANDROID_HOT_PIXEL         << 16,
    ANDROID_HOT_PIXEL_INFO_START   = ANDROID_HOT_PIXEL_INFO    << 16,
    ANDROID_JPEG_START             = ANDROID_JPEG              << 16,
    ANDROID_LENS_START             = ANDROID_LENS              << 16,
    ANDROID_LENS_INFO_START        = ANDROID_LENS_INFO         << 16,
    ANDROID_NOISE_REDUCTION_START  = ANDROID_NOISE_REDUCTION   << 16,
    ANDROID_QUIRKS_START           = ANDROID_QUIRKS            << 16,
    ANDROID_REQUEST_START          = ANDROID_REQUEST           << 16,
    ANDROID_SCALER_START           = ANDROID_SCALER            << 16,
    ANDROID_SENSOR_START           = ANDROID_SENSOR            << 16,
    ANDROID_SENSOR_INFO_START      = ANDROID_SENSOR_INFO       << 16,
    ANDROID_SHADING_START          = ANDROID_SHADING           << 16,
    ANDROID_STATISTICS_START       = ANDROID_STATISTICS        << 16,
    ANDROID_STATISTICS_INFO_START  = ANDROID_STATISTICS_INFO   << 16,
    ANDROID_TONEMAP_START          = ANDROID_TONEMAP           << 16,
    ANDROID_LED_START              = ANDROID_LED               << 16,
    ANDROID_INFO_START             = ANDROID_INFO              << 16,
    ANDROID_BLACK_LEVEL_START      = ANDROID_BLACK_LEVEL       << 16,
    ANDROID_SYNC_START             = ANDROID_SYNC              << 16,
    VENDOR_SECTION_START           = VENDOR_SECTION            << 16
} camera_metadata_section_start_t;

/**
 * Main enum for defining camera metadata tags.  New entries must always go
 * before the section _END tag to preserve existing enumeration values.  In
 * addition, the name and type of the tag needs to be added to
 * system/media/camera/src/camera_metadata_tag_info.c
 */
typedef enum camera_metadata_tag {
    ANDROID_COLOR_CORRECTION_MODE =                   // enum         | public
            ANDROID_COLOR_CORRECTION_START,
    ANDROID_COLOR_CORRECTION_TRANSFORM,               // rational[]   | public
    ANDROID_COLOR_CORRECTION_GAINS,                   // float[]      | public
    ANDROID_COLOR_CORRECTION_END,

    ANDROID_CONTROL_AE_ANTIBANDING_MODE =             // enum         | public
            ANDROID_CONTROL_START,
    ANDROID_CONTROL_AE_EXPOSURE_COMPENSATION,         // int32        | public
    ANDROID_CONTROL_AE_LOCK,                          // enum         | public
    ANDROID_CONTROL_AE_MODE,                          // enum         | public
    ANDROID_CONTROL_AE_REGIONS,                       // int32[]      | public
    ANDROID_CONTROL_AE_TARGET_FPS_RANGE,              // int32[]      | public
    ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER,            // enum         | public
    ANDROID_CONTROL_AF_MODE,                          // enum         | public
    ANDROID_CONTROL_AF_REGIONS,                       // int32[]      | public
    ANDROID_CONTROL_AF_TRIGGER,                       // enum         | public
    ANDROID_CONTROL_AWB_LOCK,                         // enum         | public
    ANDROID_CONTROL_AWB_MODE,                         // enum         | public
    ANDROID_CONTROL_AWB_REGIONS,                      // int32[]      | public
    ANDROID_CONTROL_CAPTURE_INTENT,                   // enum         | public
    ANDROID_CONTROL_EFFECT_MODE,                      // enum         | public
    ANDROID_CONTROL_MODE,                             // enum         | public
    ANDROID_CONTROL_SCENE_MODE,                       // enum         | public
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE,         // enum         | public
    ANDROID_CONTROL_AE_AVAILABLE_ANTIBANDING_MODES,   // byte[]       | public
    ANDROID_CONTROL_AE_AVAILABLE_MODES,               // byte[]       | public
    ANDROID_CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES,   // int32[]      | public
    ANDROID_CONTROL_AE_COMPENSATION_RANGE,            // int32[]      | public
    ANDROID_CONTROL_AE_COMPENSATION_STEP,             // rational     | public
    ANDROID_CONTROL_AF_AVAILABLE_MODES,               // byte[]       | public
    ANDROID_CONTROL_AVAILABLE_EFFECTS,                // byte[]       | public
    ANDROID_CONTROL_AVAILABLE_SCENE_MODES,            // byte[]       | public
    ANDROID_CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES,
                                                      // byte[]       | public
    ANDROID_CONTROL_AWB_AVAILABLE_MODES,              // byte[]       | public
    ANDROID_CONTROL_MAX_REGIONS,                      // int32[]      | public
    ANDROID_CONTROL_SCENE_MODE_OVERRIDES,             // byte[]       | system
    ANDROID_CONTROL_AE_PRECAPTURE_ID,                 // int32        | hidden
    ANDROID_CONTROL_AE_STATE,                         // enum         | public
    ANDROID_CONTROL_AF_STATE,                         // enum         | public
    ANDROID_CONTROL_AF_TRIGGER_ID,                    // int32        | hidden
    ANDROID_CONTROL_AWB_STATE,                        // enum         | public
    ANDROID_CONTROL_END,

    ANDROID_DEMOSAIC_MODE =                           // enum         | system
            ANDROID_DEMOSAIC_START,
    ANDROID_DEMOSAIC_END,

    ANDROID_EDGE_MODE =                               // enum         | public
            ANDROID_EDGE_START,
    ANDROID_EDGE_STRENGTH,                            // byte         | system
    ANDROID_EDGE_END,

    ANDROID_FLASH_FIRING_POWER =                      // byte         | system
            ANDROID_FLASH_START,
    ANDROID_FLASH_FIRING_TIME,                        // int64        | system
    ANDROID_FLASH_MODE,                               // enum         | public
    ANDROID_FLASH_COLOR_TEMPERATURE,                  // byte         | system
    ANDROID_FLASH_MAX_ENERGY,                         // byte         | system
    ANDROID_FLASH_STATE,                              // enum         | public
    ANDROID_FLASH_END,

    ANDROID_FLASH_INFO_AVAILABLE =                    // enum         | public
            ANDROID_FLASH_INFO_START,
    ANDROID_FLASH_INFO_CHARGE_DURATION,               // int64        | system
    ANDROID_FLASH_INFO_END,

    ANDROID_GEOMETRIC_MODE =                          // enum         | system
            ANDROID_GEOMETRIC_START,
    ANDROID_GEOMETRIC_STRENGTH,                       // byte         | system
    ANDROID_GEOMETRIC_END,

    ANDROID_HOT_PIXEL_MODE =                          // enum         | system
            ANDROID_HOT_PIXEL_START,
    ANDROID_HOT_PIXEL_END,

    ANDROID_HOT_PIXEL_INFO_MAP =                      // int32[]      | system
            ANDROID_HOT_PIXEL_INFO_START,
    ANDROID_HOT_PIXEL_INFO_END,

    ANDROID_JPEG_GPS_COORDINATES =                    // double[]     | public
            ANDROID_JPEG_START,
    ANDROID_JPEG_GPS_PROCESSING_METHOD,               // byte         | public
    ANDROID_JPEG_GPS_TIMESTAMP,                       // int64        | public
    ANDROID_JPEG_ORIENTATION,                         // int32        | public
    ANDROID_JPEG_QUALITY,                             // byte         | public
    ANDROID_JPEG_THUMBNAIL_QUALITY,                   // byte         | public
    ANDROID_JPEG_THUMBNAIL_SIZE,                      // int32[]      | public
    ANDROID_JPEG_AVAILABLE_THUMBNAIL_SIZES,           // int32[]      | public
    ANDROID_JPEG_MAX_SIZE,                            // int32        | system
    ANDROID_JPEG_SIZE,                                // int32        | system
    ANDROID_JPEG_END,

    ANDROID_LENS_APERTURE =                           // float        | public
            ANDROID_LENS_START,
    ANDROID_LENS_FILTER_DENSITY,                      // float        | public
    ANDROID_LENS_FOCAL_LENGTH,                        // float        | public
    ANDROID_LENS_FOCUS_DISTANCE,                      // float        | public
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE,          // enum         | public
    ANDROID_LENS_FACING,                              // enum         | public
    ANDROID_LENS_OPTICAL_AXIS_ANGLE,                  // float[]      | system
    ANDROID_LENS_POSITION,                            // float[]      | system
    ANDROID_LENS_FOCUS_RANGE,                         // float[]      | public
    ANDROID_LENS_STATE,                               // enum         | public
    ANDROID_LENS_END,

    ANDROID_LENS_INFO_AVAILABLE_APERTURES =           // float[]      | public
            ANDROID_LENS_INFO_START,
    ANDROID_LENS_INFO_AVAILABLE_FILTER_DENSITIES,     // float[]      | public
    ANDROID_LENS_INFO_AVAILABLE_FOCAL_LENGTHS,        // float[]      | public
    ANDROID_LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION,// byte[]       | public
    ANDROID_LENS_INFO_GEOMETRIC_CORRECTION_MAP,       // float[]      | system
    ANDROID_LENS_INFO_GEOMETRIC_CORRECTION_MAP_SIZE,  // int32[]      | system
    ANDROID_LENS_INFO_HYPERFOCAL_DISTANCE,            // float        | public
    ANDROID_LENS_INFO_MINIMUM_FOCUS_DISTANCE,         // float        | public
    ANDROID_LENS_INFO_SHADING_MAP_SIZE,               // int32[]      | public
    ANDROID_LENS_INFO_FOCUS_DISTANCE_CALIBRATION,     // enum         | public
    ANDROID_LENS_INFO_END,

    ANDROID_NOISE_REDUCTION_MODE =                    // enum         | public
            ANDROID_NOISE_REDUCTION_START,
    ANDROID_NOISE_REDUCTION_STRENGTH,                 // byte         | system
    ANDROID_NOISE_REDUCTION_END,

    ANDROID_QUIRKS_METERING_CROP_REGION =             // byte         | system
            ANDROID_QUIRKS_START,
    ANDROID_QUIRKS_TRIGGER_AF_WITH_AUTO,              // byte         | system
    ANDROID_QUIRKS_USE_ZSL_FORMAT,                    // byte         | system
    ANDROID_QUIRKS_USE_PARTIAL_RESULT,                // byte         | hidden
    ANDROID_QUIRKS_PARTIAL_RESULT,                    // enum         | hidden
    ANDROID_QUIRKS_END,

    ANDROID_REQUEST_FRAME_COUNT =                     // int32        | public
            ANDROID_REQUEST_START,
    ANDROID_REQUEST_ID,                               // int32        | hidden
    ANDROID_REQUEST_INPUT_STREAMS,                    // int32[]      | system
    ANDROID_REQUEST_METADATA_MODE,                    // enum         | system
    ANDROID_REQUEST_OUTPUT_STREAMS,                   // int32[]      | system
    ANDROID_REQUEST_TYPE,                             // enum         | system
    ANDROID_REQUEST_MAX_NUM_OUTPUT_STREAMS,           // int32[]      | public
    ANDROID_REQUEST_MAX_NUM_REPROCESS_STREAMS,        // int32[]      | system
    ANDROID_REQUEST_MAX_NUM_INPUT_STREAMS,            // int32        | public
    ANDROID_REQUEST_PIPELINE_DEPTH,                   // byte         | public
    ANDROID_REQUEST_PIPELINE_MAX_DEPTH,               // byte         | public
    ANDROID_REQUEST_PARTIAL_RESULT_COUNT,             // int32        | public
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES,           // enum         | public
    ANDROID_REQUEST_AVAILABLE_REQUEST_KEYS,           // int32[]      | hidden
    ANDROID_REQUEST_AVAILABLE_RESULT_KEYS,            // int32[]      | hidden
    ANDROID_REQUEST_AVAILABLE_CHARACTERISTICS_KEYS,   // int32[]      | hidden
    ANDROID_REQUEST_END,

    ANDROID_SCALER_CROP_REGION =                      // int32[]      | public
            ANDROID_SCALER_START,
    ANDROID_SCALER_AVAILABLE_FORMATS,                 // enum[]       | public
    ANDROID_SCALER_AVAILABLE_JPEG_MIN_DURATIONS,      // int64[]      | public
    ANDROID_SCALER_AVAILABLE_JPEG_SIZES,              // int32[]      | public
    ANDROID_SCALER_AVAILABLE_MAX_DIGITAL_ZOOM,        // float        | public
    ANDROID_SCALER_AVAILABLE_PROCESSED_MIN_DURATIONS, // int64[]      | public
    ANDROID_SCALER_AVAILABLE_PROCESSED_SIZES,         // int32[]      | public
    ANDROID_SCALER_AVAILABLE_RAW_MIN_DURATIONS,       // int64[]      | system
    ANDROID_SCALER_AVAILABLE_RAW_SIZES,               // int32[]      | system
    ANDROID_SCALER_AVAILABLE_INPUT_OUTPUT_FORMATS_MAP,// int32[]      | public
    ANDROID_SCALER_AVAILABLE_STREAM_CONFIGURATIONS,   // enum[]       | public
    ANDROID_SCALER_AVAILABLE_MIN_FRAME_DURATIONS,     // int64[]      | public
    ANDROID_SCALER_AVAILABLE_STALL_DURATIONS,         // int64[]      | public
    ANDROID_SCALER_END,

    ANDROID_SENSOR_EXPOSURE_TIME =                    // int64        | public
            ANDROID_SENSOR_START,
    ANDROID_SENSOR_FRAME_DURATION,                    // int64        | public
    ANDROID_SENSOR_SENSITIVITY,                       // int32        | public
    ANDROID_SENSOR_BASE_GAIN_FACTOR,                  // rational     | public
    ANDROID_SENSOR_BLACK_LEVEL_PATTERN,               // int32[]      | public
    ANDROID_SENSOR_CALIBRATION_TRANSFORM1,            // rational[]   | system
    ANDROID_SENSOR_CALIBRATION_TRANSFORM2,            // rational[]   | system
    ANDROID_SENSOR_COLOR_TRANSFORM1,                  // rational[]   | system
    ANDROID_SENSOR_COLOR_TRANSFORM2,                  // rational[]   | system
    ANDROID_SENSOR_FORWARD_MATRIX1,                   // rational[]   | system
    ANDROID_SENSOR_FORWARD_MATRIX2,                   // rational[]   | system
    ANDROID_SENSOR_MAX_ANALOG_SENSITIVITY,            // int32        | public
    ANDROID_SENSOR_NOISE_MODEL_COEFFICIENTS,          // float[]      | system
    ANDROID_SENSOR_ORIENTATION,                       // int32        | public
    ANDROID_SENSOR_PROFILE_HUE_SAT_MAP_DIMENSIONS,    // int32[]      | public
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1,             // enum         | system
    ANDROID_SENSOR_REFERENCE_ILLUMINANT2,             // byte         | system
    ANDROID_SENSOR_TIMESTAMP,                         // int64        | public
    ANDROID_SENSOR_TEMPERATURE,                       // float        | public
    ANDROID_SENSOR_NEUTRAL_COLOR_POINT,               // rational[]   | public
    ANDROID_SENSOR_PROFILE_HUE_SAT_MAP,               // float[]      | public
    ANDROID_SENSOR_PROFILE_TONE_CURVE,                // float[]      | public
    ANDROID_SENSOR_TEST_PATTERN_DATA,                 // int32[]      | public
    ANDROID_SENSOR_TEST_PATTERN_MODE,                 // enum         | public
    ANDROID_SENSOR_AVAILABLE_TEST_PATTERN_MODES,      // byte         | public
    ANDROID_SENSOR_END,

    ANDROID_SENSOR_INFO_ACTIVE_ARRAY_SIZE =           // int32[]      | public
            ANDROID_SENSOR_INFO_START,
    ANDROID_SENSOR_INFO_SENSITIVITY_RANGE,            // int32[]      | public
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT,     // enum         | system
    ANDROID_SENSOR_INFO_EXPOSURE_TIME_RANGE,          // int64[]      | public
    ANDROID_SENSOR_INFO_MAX_FRAME_DURATION,           // int64        | public
    ANDROID_SENSOR_INFO_PHYSICAL_SIZE,                // float[]      | public
    ANDROID_SENSOR_INFO_PIXEL_ARRAY_SIZE,             // int32[]      | system
    ANDROID_SENSOR_INFO_WHITE_LEVEL,                  // int32        | system
    ANDROID_SENSOR_INFO_END,

    ANDROID_SHADING_MODE =                            // enum         | hidden
            ANDROID_SHADING_START,
    ANDROID_SHADING_STRENGTH,                         // byte         | system
    ANDROID_SHADING_END,

    ANDROID_STATISTICS_FACE_DETECT_MODE =             // enum         | public
            ANDROID_STATISTICS_START,
    ANDROID_STATISTICS_HISTOGRAM_MODE,                // enum         | system
    ANDROID_STATISTICS_SHARPNESS_MAP_MODE,            // enum         | system
    ANDROID_STATISTICS_FACE_IDS,                      // int32[]      | hidden
    ANDROID_STATISTICS_FACE_LANDMARKS,                // int32[]      | hidden
    ANDROID_STATISTICS_FACE_RECTANGLES,               // int32[]      | hidden
    ANDROID_STATISTICS_FACE_SCORES,                   // byte[]       | hidden
    ANDROID_STATISTICS_HISTOGRAM,                     // int32[]      | system
    ANDROID_STATISTICS_SHARPNESS_MAP,                 // int32[]      | system
    ANDROID_STATISTICS_LENS_SHADING_MAP,              // float[]      | public
    ANDROID_STATISTICS_PREDICTED_COLOR_GAINS,         // float[]      | hidden
    ANDROID_STATISTICS_PREDICTED_COLOR_TRANSFORM,     // rational[]   | hidden
    ANDROID_STATISTICS_SCENE_FLICKER,                 // enum         | public
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE,         // enum         | public
    ANDROID_STATISTICS_END,

    ANDROID_STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES = 
                                                      // byte[]       | public
            ANDROID_STATISTICS_INFO_START,
    ANDROID_STATISTICS_INFO_HISTOGRAM_BUCKET_COUNT,   // int32        | system
    ANDROID_STATISTICS_INFO_MAX_FACE_COUNT,           // int32        | public
    ANDROID_STATISTICS_INFO_MAX_HISTOGRAM_COUNT,      // int32        | system
    ANDROID_STATISTICS_INFO_MAX_SHARPNESS_MAP_VALUE,  // int32        | system
    ANDROID_STATISTICS_INFO_SHARPNESS_MAP_SIZE,       // int32[]      | system
    ANDROID_STATISTICS_INFO_END,

    ANDROID_TONEMAP_CURVE_BLUE =                      // float[]      | public
            ANDROID_TONEMAP_START,
    ANDROID_TONEMAP_CURVE_GREEN,                      // float[]      | public
    ANDROID_TONEMAP_CURVE_RED,                        // float[]      | public
    ANDROID_TONEMAP_MODE,                             // enum         | public
    ANDROID_TONEMAP_MAX_CURVE_POINTS,                 // int32        | public
    ANDROID_TONEMAP_END,

    ANDROID_LED_TRANSMIT =                            // enum         | hidden
            ANDROID_LED_START,
    ANDROID_LED_AVAILABLE_LEDS,                       // enum[]       | hidden
    ANDROID_LED_END,

    ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL =           // enum         | public
            ANDROID_INFO_START,
    ANDROID_INFO_END,

    ANDROID_BLACK_LEVEL_LOCK =                        // enum         | public
            ANDROID_BLACK_LEVEL_START,
    ANDROID_BLACK_LEVEL_END,

    ANDROID_SYNC_FRAME_NUMBER =                       // enum         | hidden
            ANDROID_SYNC_START,
    ANDROID_SYNC_MAX_LATENCY,                         // enum         | public
    ANDROID_SYNC_END,

} camera_metadata_tag_t;

/**
 * Enumeration definitions for the various entries that need them
 */

// ANDROID_COLOR_CORRECTION_MODE
typedef enum camera_metadata_enum_android_color_correction_mode {
    ANDROID_COLOR_CORRECTION_MODE_TRANSFORM_MATRIX,
    ANDROID_COLOR_CORRECTION_MODE_FAST,
    ANDROID_COLOR_CORRECTION_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_color_correction_mode_t;


// ANDROID_CONTROL_AE_ANTIBANDING_MODE
typedef enum camera_metadata_enum_android_control_ae_antibanding_mode {
    ANDROID_CONTROL_AE_ANTIBANDING_MODE_OFF,
    ANDROID_CONTROL_AE_ANTIBANDING_MODE_50HZ,
    ANDROID_CONTROL_AE_ANTIBANDING_MODE_60HZ,
    ANDROID_CONTROL_AE_ANTIBANDING_MODE_AUTO,
} camera_metadata_enum_android_control_ae_antibanding_mode_t;

// ANDROID_CONTROL_AE_LOCK
typedef enum camera_metadata_enum_android_control_ae_lock {
    ANDROID_CONTROL_AE_LOCK_OFF,
    ANDROID_CONTROL_AE_LOCK_ON,
} camera_metadata_enum_android_control_ae_lock_t;

// ANDROID_CONTROL_AE_MODE
typedef enum camera_metadata_enum_android_control_ae_mode {
    ANDROID_CONTROL_AE_MODE_OFF,
    ANDROID_CONTROL_AE_MODE_ON,
    ANDROID_CONTROL_AE_MODE_ON_AUTO_FLASH,
    ANDROID_CONTROL_AE_MODE_ON_ALWAYS_FLASH,
    ANDROID_CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE,
} camera_metadata_enum_android_control_ae_mode_t;

// ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER
typedef enum camera_metadata_enum_android_control_ae_precapture_trigger {
    ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER_IDLE,
    ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER_START,
} camera_metadata_enum_android_control_ae_precapture_trigger_t;

// ANDROID_CONTROL_AF_MODE
typedef enum camera_metadata_enum_android_control_af_mode {
    ANDROID_CONTROL_AF_MODE_OFF,
    ANDROID_CONTROL_AF_MODE_AUTO,
    ANDROID_CONTROL_AF_MODE_MACRO,
    ANDROID_CONTROL_AF_MODE_CONTINUOUS_VIDEO,
    ANDROID_CONTROL_AF_MODE_CONTINUOUS_PICTURE,
    ANDROID_CONTROL_AF_MODE_EDOF,
} camera_metadata_enum_android_control_af_mode_t;

// ANDROID_CONTROL_AF_TRIGGER
typedef enum camera_metadata_enum_android_control_af_trigger {
    ANDROID_CONTROL_AF_TRIGGER_IDLE,
    ANDROID_CONTROL_AF_TRIGGER_START,
    ANDROID_CONTROL_AF_TRIGGER_CANCEL,
} camera_metadata_enum_android_control_af_trigger_t;

// ANDROID_CONTROL_AWB_LOCK
typedef enum camera_metadata_enum_android_control_awb_lock {
    ANDROID_CONTROL_AWB_LOCK_OFF,
    ANDROID_CONTROL_AWB_LOCK_ON,
} camera_metadata_enum_android_control_awb_lock_t;

// ANDROID_CONTROL_AWB_MODE
typedef enum camera_metadata_enum_android_control_awb_mode {
    ANDROID_CONTROL_AWB_MODE_OFF,
    ANDROID_CONTROL_AWB_MODE_AUTO,
    ANDROID_CONTROL_AWB_MODE_INCANDESCENT,
    ANDROID_CONTROL_AWB_MODE_FLUORESCENT,
    ANDROID_CONTROL_AWB_MODE_WARM_FLUORESCENT,
    ANDROID_CONTROL_AWB_MODE_DAYLIGHT,
    ANDROID_CONTROL_AWB_MODE_CLOUDY_DAYLIGHT,
    ANDROID_CONTROL_AWB_MODE_TWILIGHT,
    ANDROID_CONTROL_AWB_MODE_SHADE,
} camera_metadata_enum_android_control_awb_mode_t;

// ANDROID_CONTROL_CAPTURE_INTENT
typedef enum camera_metadata_enum_android_control_capture_intent {
    ANDROID_CONTROL_CAPTURE_INTENT_CUSTOM,
    ANDROID_CONTROL_CAPTURE_INTENT_PREVIEW,
    ANDROID_CONTROL_CAPTURE_INTENT_STILL_CAPTURE,
    ANDROID_CONTROL_CAPTURE_INTENT_VIDEO_RECORD,
    ANDROID_CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT,
    ANDROID_CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG,
} camera_metadata_enum_android_control_capture_intent_t;

// ANDROID_CONTROL_EFFECT_MODE
typedef enum camera_metadata_enum_android_control_effect_mode {
    ANDROID_CONTROL_EFFECT_MODE_OFF,
    ANDROID_CONTROL_EFFECT_MODE_MONO,
    ANDROID_CONTROL_EFFECT_MODE_NEGATIVE,
    ANDROID_CONTROL_EFFECT_MODE_SOLARIZE,
    ANDROID_CONTROL_EFFECT_MODE_SEPIA,
    ANDROID_CONTROL_EFFECT_MODE_POSTERIZE,
    ANDROID_CONTROL_EFFECT_MODE_WHITEBOARD,
    ANDROID_CONTROL_EFFECT_MODE_BLACKBOARD,
    ANDROID_CONTROL_EFFECT_MODE_AQUA,
} camera_metadata_enum_android_control_effect_mode_t;

// ANDROID_CONTROL_MODE
typedef enum camera_metadata_enum_android_control_mode {
    ANDROID_CONTROL_MODE_OFF,
    ANDROID_CONTROL_MODE_AUTO,
    ANDROID_CONTROL_MODE_USE_SCENE_MODE,
    ANDROID_CONTROL_MODE_OFF_KEEP_STATE,
} camera_metadata_enum_android_control_mode_t;

// ANDROID_CONTROL_SCENE_MODE
typedef enum camera_metadata_enum_android_control_scene_mode {
    ANDROID_CONTROL_SCENE_MODE_DISABLED                         = 0,
    ANDROID_CONTROL_SCENE_MODE_FACE_PRIORITY,
    ANDROID_CONTROL_SCENE_MODE_ACTION,
    ANDROID_CONTROL_SCENE_MODE_PORTRAIT,
    ANDROID_CONTROL_SCENE_MODE_LANDSCAPE,
    ANDROID_CONTROL_SCENE_MODE_NIGHT,
    ANDROID_CONTROL_SCENE_MODE_NIGHT_PORTRAIT,
    ANDROID_CONTROL_SCENE_MODE_THEATRE,
    ANDROID_CONTROL_SCENE_MODE_BEACH,
    ANDROID_CONTROL_SCENE_MODE_SNOW,
    ANDROID_CONTROL_SCENE_MODE_SUNSET,
    ANDROID_CONTROL_SCENE_MODE_STEADYPHOTO,
    ANDROID_CONTROL_SCENE_MODE_FIREWORKS,
    ANDROID_CONTROL_SCENE_MODE_SPORTS,
    ANDROID_CONTROL_SCENE_MODE_PARTY,
    ANDROID_CONTROL_SCENE_MODE_CANDLELIGHT,
    ANDROID_CONTROL_SCENE_MODE_BARCODE,
} camera_metadata_enum_android_control_scene_mode_t;

// ANDROID_CONTROL_VIDEO_STABILIZATION_MODE
typedef enum camera_metadata_enum_android_control_video_stabilization_mode {
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE_OFF,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE_ON,
} camera_metadata_enum_android_control_video_stabilization_mode_t;

// ANDROID_CONTROL_AE_STATE
typedef enum camera_metadata_enum_android_control_ae_state {
    ANDROID_CONTROL_AE_STATE_INACTIVE,
    ANDROID_CONTROL_AE_STATE_SEARCHING,
    ANDROID_CONTROL_AE_STATE_CONVERGED,
    ANDROID_CONTROL_AE_STATE_LOCKED,
    ANDROID_CONTROL_AE_STATE_FLASH_REQUIRED,
    ANDROID_CONTROL_AE_STATE_PRECAPTURE,
} camera_metadata_enum_android_control_ae_state_t;

// ANDROID_CONTROL_AF_STATE
typedef enum camera_metadata_enum_android_control_af_state {
    ANDROID_CONTROL_AF_STATE_INACTIVE,
    ANDROID_CONTROL_AF_STATE_PASSIVE_SCAN,
    ANDROID_CONTROL_AF_STATE_PASSIVE_FOCUSED,
    ANDROID_CONTROL_AF_STATE_ACTIVE_SCAN,
    ANDROID_CONTROL_AF_STATE_FOCUSED_LOCKED,
    ANDROID_CONTROL_AF_STATE_NOT_FOCUSED_LOCKED,
    ANDROID_CONTROL_AF_STATE_PASSIVE_UNFOCUSED,
} camera_metadata_enum_android_control_af_state_t;

// ANDROID_CONTROL_AWB_STATE
typedef enum camera_metadata_enum_android_control_awb_state {
    ANDROID_CONTROL_AWB_STATE_INACTIVE,
    ANDROID_CONTROL_AWB_STATE_SEARCHING,
    ANDROID_CONTROL_AWB_STATE_CONVERGED,
    ANDROID_CONTROL_AWB_STATE_LOCKED,
} camera_metadata_enum_android_control_awb_state_t;


// ANDROID_DEMOSAIC_MODE
typedef enum camera_metadata_enum_android_demosaic_mode {
    ANDROID_DEMOSAIC_MODE_FAST,
    ANDROID_DEMOSAIC_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_demosaic_mode_t;


// ANDROID_EDGE_MODE
typedef enum camera_metadata_enum_android_edge_mode {
    ANDROID_EDGE_MODE_OFF,
    ANDROID_EDGE_MODE_FAST,
    ANDROID_EDGE_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_edge_mode_t;


// ANDROID_FLASH_MODE
typedef enum camera_metadata_enum_android_flash_mode {
    ANDROID_FLASH_MODE_OFF,
    ANDROID_FLASH_MODE_SINGLE,
    ANDROID_FLASH_MODE_TORCH,
} camera_metadata_enum_android_flash_mode_t;

// ANDROID_FLASH_STATE
typedef enum camera_metadata_enum_android_flash_state {
    ANDROID_FLASH_STATE_UNAVAILABLE,
    ANDROID_FLASH_STATE_CHARGING,
    ANDROID_FLASH_STATE_READY,
    ANDROID_FLASH_STATE_FIRED,
} camera_metadata_enum_android_flash_state_t;


// ANDROID_FLASH_INFO_AVAILABLE
typedef enum camera_metadata_enum_android_flash_info_available {
    ANDROID_FLASH_INFO_AVAILABLE_FALSE,
    ANDROID_FLASH_INFO_AVAILABLE_TRUE,
} camera_metadata_enum_android_flash_info_available_t;


// ANDROID_GEOMETRIC_MODE
typedef enum camera_metadata_enum_android_geometric_mode {
    ANDROID_GEOMETRIC_MODE_OFF,
    ANDROID_GEOMETRIC_MODE_FAST,
    ANDROID_GEOMETRIC_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_geometric_mode_t;


// ANDROID_HOT_PIXEL_MODE
typedef enum camera_metadata_enum_android_hot_pixel_mode {
    ANDROID_HOT_PIXEL_MODE_OFF,
    ANDROID_HOT_PIXEL_MODE_FAST,
    ANDROID_HOT_PIXEL_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_hot_pixel_mode_t;




// ANDROID_LENS_OPTICAL_STABILIZATION_MODE
typedef enum camera_metadata_enum_android_lens_optical_stabilization_mode {
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE_OFF,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE_ON,
} camera_metadata_enum_android_lens_optical_stabilization_mode_t;

// ANDROID_LENS_FACING
typedef enum camera_metadata_enum_android_lens_facing {
    ANDROID_LENS_FACING_FRONT,
    ANDROID_LENS_FACING_BACK,
} camera_metadata_enum_android_lens_facing_t;

// ANDROID_LENS_STATE
typedef enum camera_metadata_enum_android_lens_state {
    ANDROID_LENS_STATE_STATIONARY,
    ANDROID_LENS_STATE_MOVING,
} camera_metadata_enum_android_lens_state_t;


// ANDROID_LENS_INFO_FOCUS_DISTANCE_CALIBRATION
typedef enum camera_metadata_enum_android_lens_info_focus_distance_calibration {
    ANDROID_LENS_INFO_FOCUS_DISTANCE_CALIBRATION_UNCALIBRATED,
    ANDROID_LENS_INFO_FOCUS_DISTANCE_CALIBRATION_APPROXIMATE,
    ANDROID_LENS_INFO_FOCUS_DISTANCE_CALIBRATION_CALIBRATED,
} camera_metadata_enum_android_lens_info_focus_distance_calibration_t;


// ANDROID_NOISE_REDUCTION_MODE
typedef enum camera_metadata_enum_android_noise_reduction_mode {
    ANDROID_NOISE_REDUCTION_MODE_OFF,
    ANDROID_NOISE_REDUCTION_MODE_FAST,
    ANDROID_NOISE_REDUCTION_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_noise_reduction_mode_t;


// ANDROID_QUIRKS_PARTIAL_RESULT
typedef enum camera_metadata_enum_android_quirks_partial_result {
    ANDROID_QUIRKS_PARTIAL_RESULT_FINAL,
    ANDROID_QUIRKS_PARTIAL_RESULT_PARTIAL,
} camera_metadata_enum_android_quirks_partial_result_t;


// ANDROID_REQUEST_METADATA_MODE
typedef enum camera_metadata_enum_android_request_metadata_mode {
    ANDROID_REQUEST_METADATA_MODE_NONE,
    ANDROID_REQUEST_METADATA_MODE_FULL,
} camera_metadata_enum_android_request_metadata_mode_t;

// ANDROID_REQUEST_TYPE
typedef enum camera_metadata_enum_android_request_type {
    ANDROID_REQUEST_TYPE_CAPTURE,
    ANDROID_REQUEST_TYPE_REPROCESS,
} camera_metadata_enum_android_request_type_t;

// ANDROID_REQUEST_AVAILABLE_CAPABILITIES
typedef enum camera_metadata_enum_android_request_available_capabilities {
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_OPTIONAL,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_GCAM,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_ZSL,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_DNG,
} camera_metadata_enum_android_request_available_capabilities_t;


// ANDROID_SCALER_AVAILABLE_FORMATS
typedef enum camera_metadata_enum_android_scaler_available_formats {
    ANDROID_SCALER_AVAILABLE_FORMATS_RAW16                      = 0x20,
    ANDROID_SCALER_AVAILABLE_FORMATS_RAW_OPAQUE                 = 0x24,
    ANDROID_SCALER_AVAILABLE_FORMATS_YV12                       = 0x32315659,
    ANDROID_SCALER_AVAILABLE_FORMATS_YCrCb_420_SP               = 0x11,
    ANDROID_SCALER_AVAILABLE_FORMATS_IMPLEMENTATION_DEFINED     = 0x22,
    ANDROID_SCALER_AVAILABLE_FORMATS_YCbCr_420_888              = 0x23,
    ANDROID_SCALER_AVAILABLE_FORMATS_BLOB                       = 0x21,
} camera_metadata_enum_android_scaler_available_formats_t;

// ANDROID_SCALER_AVAILABLE_STREAM_CONFIGURATIONS
typedef enum camera_metadata_enum_android_scaler_available_stream_configurations {
    ANDROID_SCALER_AVAILABLE_STREAM_CONFIGURATIONS_OUTPUT,
    ANDROID_SCALER_AVAILABLE_STREAM_CONFIGURATIONS_INPUT,
} camera_metadata_enum_android_scaler_available_stream_configurations_t;


// ANDROID_SENSOR_REFERENCE_ILLUMINANT1
typedef enum camera_metadata_enum_android_sensor_reference_illuminant1 {
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT               = 1,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT            = 2,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN               = 3,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_FLASH                  = 4,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER           = 9,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER         = 10,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_SHADE                  = 11,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT   = 12,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT  = 13,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT = 14,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT      = 15,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A             = 17,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B             = 18,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C             = 19,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_D55                    = 20,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_D65                    = 21,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_D75                    = 22,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_D50                    = 23,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN    = 24,
} camera_metadata_enum_android_sensor_reference_illuminant1_t;

// ANDROID_SENSOR_TEST_PATTERN_MODE
typedef enum camera_metadata_enum_android_sensor_test_pattern_mode {
    ANDROID_SENSOR_TEST_PATTERN_MODE_OFF,
    ANDROID_SENSOR_TEST_PATTERN_MODE_SOLID_COLOR,
    ANDROID_SENSOR_TEST_PATTERN_MODE_COLOR_BARS,
    ANDROID_SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY,
    ANDROID_SENSOR_TEST_PATTERN_MODE_PN9,
    ANDROID_SENSOR_TEST_PATTERN_MODE_CUSTOM1                    = 256,
} camera_metadata_enum_android_sensor_test_pattern_mode_t;


// ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT
typedef enum camera_metadata_enum_android_sensor_info_color_filter_arrangement {
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB,
} camera_metadata_enum_android_sensor_info_color_filter_arrangement_t;


// ANDROID_SHADING_MODE
typedef enum camera_metadata_enum_android_shading_mode {
    ANDROID_SHADING_MODE_OFF,
    ANDROID_SHADING_MODE_FAST,
    ANDROID_SHADING_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_shading_mode_t;


// ANDROID_STATISTICS_FACE_DETECT_MODE
typedef enum camera_metadata_enum_android_statistics_face_detect_mode {
    ANDROID_STATISTICS_FACE_DETECT_MODE_OFF,
    ANDROID_STATISTICS_FACE_DETECT_MODE_SIMPLE,
    ANDROID_STATISTICS_FACE_DETECT_MODE_FULL,
} camera_metadata_enum_android_statistics_face_detect_mode_t;

// ANDROID_STATISTICS_HISTOGRAM_MODE
typedef enum camera_metadata_enum_android_statistics_histogram_mode {
    ANDROID_STATISTICS_HISTOGRAM_MODE_OFF,
    ANDROID_STATISTICS_HISTOGRAM_MODE_ON,
} camera_metadata_enum_android_statistics_histogram_mode_t;

// ANDROID_STATISTICS_SHARPNESS_MAP_MODE
typedef enum camera_metadata_enum_android_statistics_sharpness_map_mode {
    ANDROID_STATISTICS_SHARPNESS_MAP_MODE_OFF,
    ANDROID_STATISTICS_SHARPNESS_MAP_MODE_ON,
} camera_metadata_enum_android_statistics_sharpness_map_mode_t;

// ANDROID_STATISTICS_SCENE_FLICKER
typedef enum camera_metadata_enum_android_statistics_scene_flicker {
    ANDROID_STATISTICS_SCENE_FLICKER_NONE,
    ANDROID_STATISTICS_SCENE_FLICKER_50HZ,
    ANDROID_STATISTICS_SCENE_FLICKER_60HZ,
} camera_metadata_enum_android_statistics_scene_flicker_t;

// ANDROID_STATISTICS_LENS_SHADING_MAP_MODE
typedef enum camera_metadata_enum_android_statistics_lens_shading_map_mode {
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE_OFF,
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE_ON,
} camera_metadata_enum_android_statistics_lens_shading_map_mode_t;



// ANDROID_TONEMAP_MODE
typedef enum camera_metadata_enum_android_tonemap_mode {
    ANDROID_TONEMAP_MODE_CONTRAST_CURVE,
    ANDROID_TONEMAP_MODE_FAST,
    ANDROID_TONEMAP_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_tonemap_mode_t;


// ANDROID_LED_TRANSMIT
typedef enum camera_metadata_enum_android_led_transmit {
    ANDROID_LED_TRANSMIT_OFF,
    ANDROID_LED_TRANSMIT_ON,
} camera_metadata_enum_android_led_transmit_t;

// ANDROID_LED_AVAILABLE_LEDS
typedef enum camera_metadata_enum_android_led_available_leds {
    ANDROID_LED_AVAILABLE_LEDS_TRANSMIT,
} camera_metadata_enum_android_led_available_leds_t;


// ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL
typedef enum camera_metadata_enum_android_info_supported_hardware_level {
    ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED,
    ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_FULL,
} camera_metadata_enum_android_info_supported_hardware_level_t;


// ANDROID_BLACK_LEVEL_LOCK
typedef enum camera_metadata_enum_android_black_level_lock {
    ANDROID_BLACK_LEVEL_LOCK_OFF,
    ANDROID_BLACK_LEVEL_LOCK_ON,
} camera_metadata_enum_android_black_level_lock_t;


// ANDROID_SYNC_FRAME_NUMBER
typedef enum camera_metadata_enum_android_sync_frame_number {
    ANDROID_SYNC_FRAME_NUMBER_CONVERGING                        = -1,
    ANDROID_SYNC_FRAME_NUMBER_UNKNOWN                           = -2,
} camera_metadata_enum_android_sync_frame_number_t;

// ANDROID_SYNC_MAX_LATENCY
typedef enum camera_metadata_enum_android_sync_max_latency {
    ANDROID_SYNC_MAX_LATENCY_PER_FRAME_CONTROL                  = 0,
    ANDROID_SYNC_MAX_LATENCY_UNKNOWN                            = -1,
} camera_metadata_enum_android_sync_max_latency_t;


