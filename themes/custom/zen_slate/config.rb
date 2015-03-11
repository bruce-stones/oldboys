
environment     = :development #:production
firesass        = true

css_dir         = "css"
sass_dir        = "sass"
images_dir      = "images"
extensions_dir  = "sass-extensions"

output_style    = (environment == :development) ? :expanded : :compressed
relative_assets = true
sass_options    = (environment == :development && firesass == true) ? {:debug_info => true} : {}
