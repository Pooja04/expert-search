var map_cfg = {
  mapWidth: "100%", // Map width in pixels. If 0 - map width will be 100% (responsive mode)
  // Also any percent value can be specified. I.e. '50%'
  mapHeight: 420, // Map height. If width = 0 or % - height will be ignored

  borderWidth: 1.01, // Border width for regions
  borderColor: "#5779a2",
  borderColorOver: "#385b89", // Color of the border for active region

  pointBorderWidth: 1, // Border width for point
  pointBorderColor: "#ffffff", //Border color for point
  pointBorderColorOver: "#ffffff", // Color of the border for active point

  nameColor: "#ffffff", // Name colors (used with short name)
  nameColorOver: "#ffffff", // Color of the short name for active region
  nameFontSize: "9px", // Short names font size
  nameFontWeight: "bold", // Short name boldness. Can be "normal" or "bold"
  nameStroke: true, // Whether short names should have stroke or not
  nameStrokeColor: '#000000',
  nameStrokeColorOver: false,
  nameStrokeWidth: 1.1,
  nameStrokeOpacity: 0.4, // Short name stroke opacity.
  nameAutoSize: false, // Try to fit label into a region shape if shape is smaller than a shortname

  pointNameColor: "#ffffff", // Name colors (used with short name) for points
  pointNameColorOver: "#ffffff", // Color of the short name for active point
  pointNameFontSize: "7px", // Short names font size of the point shortname
  pointNameFontWeight: "bold", // Short name boldness. Can be "normal" or "bold"
  pointNameStroke: true, // Whether short names should have stroke or not

  zoomEnable: true, // Whether zoom capabilities enabled or not
  zoomEnableControls: true, // Whether zoom controls are available or not
  zoomMax: 2, // Maximum zoom level
  zoomStep: 0.2, // This setting is used by scroll zooming and zoomIn and zoomOut methods

  overDelay: 100, // animation duration in milliseconds

  pathToJSON: "sites/all/themes/expertsearch/map/data/", // path where all map data for sub regions is stored
  mainCfg: "main.cfg.js", // filename with configuration for the top-level region
  //mainPoints: "main.points.js", // filename with points information for the top-level region

  inputName: "", // Name of the input field in which selected states are stored (and can be sent to server)
  inputValue: "", // Default value for input field. Specified states will be selected.
  parseQueryString: true, // If true - query string will be parsed for searching "inputName" and founded values will be default values for "inputValue"

  multiSelect: false, // If false - only one state can be selected at a time

  backButtonTitle: 'back', // Text for back button
  debug: false, // debug mode
  //isNewWindow: true,
}
