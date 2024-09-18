package tcp

import "github.com/vitorsavian/warsong-repo/elminster/pkg/adapter/request"

func (e *EchoConfig) SetupRoutes() {
	api := e.Conn.Group("/api")

	character := api.Group("/character")
	character.GET(":id", nil)
	character.PUT(":id", nil)
	character.DELETE(":id", nil)
	character.POST("", request.CreateCharacter)
}
