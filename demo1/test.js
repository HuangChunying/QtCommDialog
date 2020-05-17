function addCircle()
    {
        var point = new BMap.Point(116.404, 39.915);
        var circle = new BMap.Circle(point, 6000, { strokeColor: "red", strokeWeight: 5, strokeOpacity: 0.3 }); //创建圆
        map.addOverlay(circle);            //增加圆
    }
