mergeInto(LibraryManager.library, {
  getCanvasWidth: function() { return globalCanvas.width; },
  getCanvasHeight: function() { return globalCanvas.height; },
  clear: function() {
    globalCtx.clearRect(0, 0, globalCanvas.width, globalCanvas.height);
  },
  fillRect: function(c, x, y, w, h) {
    // Color
    globalCtx.fillStyle = Pointer_stringify(c);
    
    // Fill rect
    globalCtx.fillRect(x, y, w, h);
  }
});
